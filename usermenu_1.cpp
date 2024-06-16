#include "usermenu_1.h"
#include "ui_usermenu_1.h"
#include "mainwindow.h"
#include "usermenu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_u1;
UserMenu *usermenu_u1;

UserMenu_1::UserMenu_1(QWidget *parent, const QString &userLogin)
    : QDialog(parent)
    , ui(new Ui::UserMenu_1)
    , userLogin(userLogin)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UserMenu_1::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelRezerwacje = new QStandardItemModel(this);
    modelRezerwacje->setColumnCount(5);
    modelRezerwacje->setHeaderData(0, Qt::Horizontal, "ID Samochodu");
    modelRezerwacje->setHeaderData(1, Qt::Horizontal, "Marka");
    modelRezerwacje->setHeaderData(2, Qt::Horizontal, "Model");
    modelRezerwacje->setHeaderData(3, Qt::Horizontal, "Data Rozpoczęcia");
    modelRezerwacje->setHeaderData(4, Qt::Horizontal, "Data Zakończenia");

    ui->tableView_AktualneRezerwacje->setModel(modelRezerwacje);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_AktualneRezerwacje->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie aktualnych rezerwacji z pliku
    wczytajAktualneRezerwacje();
}

UserMenu_1::~UserMenu_1()
{
    delete ui;
}

void UserMenu_1::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void UserMenu_1::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_u1 = new MainWindow(this);
    mainwindow_u1->show();
}

void UserMenu_1::on_pushButton_Wstecz_clicked()
{
    hide();
    usermenu_u1 = new UserMenu(this, userLogin);
    usermenu_u1->show();
    usermenu_u1->refreshUserMenu3();
}

void UserMenu_1::wczytajAktualneRezerwacje() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 6) {
            QString login = fields[0];
            if (login == userLogin) {
                QList<QStandardItem *> items;
                for (int i = 1; i < fields.size(); ++i) {
                    QStandardItem *item = new QStandardItem(fields[i]);
                    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                    items.append(item);
                }
                modelRezerwacje->appendRow(items);

                QDate currentDate = QDate::currentDate();
                QDate endDate = QDate::fromString(fields[5], "yyyy-MM-dd");
                if (currentDate < endDate) {
                    for (QStandardItem *item : items) {
                        item->setBackground(QColor(Qt::green));
                    }
                } else if (currentDate == endDate) {
                    for (QStandardItem *item : items) {
                        item->setBackground(QColor(Qt::yellow));
                    }
                } else {
                    for (QStandardItem *item : items) {
                        item->setBackground(QColor(Qt::red));
                    }
                }
            }
        }
    }
    file.close();
}

void UserMenu_1::zapiszRezerwacje() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return;
    }
    QTextStream out(&file);
    for (int row = 0; row < modelRezerwacje->rowCount(); ++row) {
        QString login = userLogin;
        QString idSamochodu = modelRezerwacje->item(row, 0)->text();
        QString marka = modelRezerwacje->item(row, 1)->text();
        QString model = modelRezerwacje->item(row, 2)->text();
        QString dataRozpoczecia = modelRezerwacje->item(row, 3)->text();
        QString dataZakonczenia = modelRezerwacje->item(row, 4)->text();
        out << login << " " << idSamochodu << " " << marka << " " << model << " " << dataRozpoczecia << " " << dataZakonczenia << "\n";
    }
    file.close();
}


void UserMenu_1::aktualizujStatusSamochodu(const QString &idSamochodu, const QString &nowyStatus) {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/cars.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku cars.txt!";
        return;
    }
    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields[0] == idSamochodu) {
            fields[5] = nowyStatus;
            lines.append(fields.join(" "));
        } else {
            lines.append(line);
        }
    }
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku cars.txt!";
        return;
    }
    QTextStream out(&file);
    for (const QString &line : lines) {
        out << line << "\n";
    }
    file.close();
}



void UserMenu_1::on_pushButton_Zwroc_clicked()
{
    QString idSamochodu = ui->lineEdit_ID_Samochodu->text();

    bool znaleziono = false;
    int indeksRezerwacji = -1;
    QDate dataZakonczenia;

    for (int row = 0; row < modelRezerwacje->rowCount(); ++row) {
        if (modelRezerwacje->item(row, 0)->text() == idSamochodu) {
            znaleziono = true;
            indeksRezerwacji = row;
            dataZakonczenia = QDate::fromString(modelRezerwacje->item(row, 4)->text(), "yyyy-MM-dd");
            break;
        }
    }

    if (!znaleziono) {
        QMessageBox::warning(this, "Błąd", "Nie znaleziono rezerwacji dla podanego ID samochodu.");
        return;
    }

    QDate currentDate = QDate::currentDate();
    int dniOpoznienia = dataZakonczenia.daysTo(currentDate);

    if (dniOpoznienia > 0) {
        int kara = dniOpoznienia * 100;
        ui->label_Dni->setText(QString::number(dniOpoznienia));
        ui->label_Kara->setText(QString::number(kara) + " zł");
        if (!ui->radioButton_Blik->isChecked() && !ui->radioButton_Karta->isChecked()) {
            QMessageBox::warning(this, "Błąd", "Proszę wybrać metodę płatności.");
            return;
        }

        if (ui->radioButton_Blik->isChecked() && ui->lineEdit_BLIK->text().isEmpty()) {
            QMessageBox::warning(this, "Błąd", "Proszę wprowadzić kod BLIK.");
            return;
        }

        if (ui->radioButton_Karta->isChecked() && ui->lineEdit_Karta->text().isEmpty()) {
            QMessageBox::warning(this, "Błąd", "Proszę wprowadzić numer karty.");
            return;
        }
    } else {
        ui->label_Dni->clear();
        ui->label_Kara->clear();
    }

    // Usuń rezerwację z pliku
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return;
    }
    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields[1] != idSamochodu) {
            lines.append(line);
        }
    }
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return;
    }
    QTextStream out(&file);
    for (const QString &line : lines) {
        out << line << "\n";
    }
    file.close();

    // Usuń rezerwację z modelu
    modelRezerwacje->removeRow(indeksRezerwacji);

    // Zaktualizuj status samochodu
    aktualizujStatusSamochodu(idSamochodu, "Dostępny");

    QMessageBox::information(this, "Sukces", "Samochód został zwrócony.");
}








