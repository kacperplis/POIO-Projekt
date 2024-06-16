#include "usermenu_2.h"
#include "ui_usermenu_2.h"
#include "mainwindow.h"
#include "usermenu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_u2;
UserMenu *usermenu_u2;

UserMenu_2::UserMenu_2(QWidget *parent, const QString &userLogin)
    : QDialog(parent)
    , ui(new Ui::UserMenu_2)
    , userLogin(userLogin)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UserMenu_2::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelSamochody = new QStandardItemModel(this);
    modelSamochody->setColumnCount(7);
    modelSamochody->setHeaderData(0, Qt::Horizontal, "ID");
    modelSamochody->setHeaderData(1, Qt::Horizontal, "Marka");
    modelSamochody->setHeaderData(2, Qt::Horizontal, "Model");
    modelSamochody->setHeaderData(3, Qt::Horizontal, "Ilość drzwi");
    modelSamochody->setHeaderData(4, Qt::Horizontal, "Klimatyzacja");
    modelSamochody->setHeaderData(5, Qt::Horizontal, "Stan");
    modelSamochody->setHeaderData(6, Qt::Horizontal, "Cena");

    ui->tableView_BazaSamochodow->setModel(modelSamochody);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_BazaSamochodow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie samochodów z pliku
    wczytajSamochody();
}

UserMenu_2::~UserMenu_2()
{
    delete ui;
}

void UserMenu_2::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void UserMenu_2::wczytajSamochody() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/cars.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku cars.txt!";
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 7) {
            QList<QStandardItem *> items;
            QStandardItem *idItem = new QStandardItem(fields[0]);
            QStandardItem *markaItem = new QStandardItem(fields[1]);
            QStandardItem *modelItem = new QStandardItem(fields[2]);
            QStandardItem *iloscDrzwiItem = new QStandardItem(fields[3]);
            QStandardItem *klimatyzacjaItem = new QStandardItem(fields[4]);
            QStandardItem *stanItem = new QStandardItem(fields[5]);
            QStandardItem *cenaItem = new QStandardItem(fields[6]);
            idItem->setFlags(idItem->flags() & ~Qt::ItemIsEditable);
            markaItem->setFlags(markaItem->flags() & ~Qt::ItemIsEditable);
            modelItem->setFlags(modelItem->flags() & ~Qt::ItemIsEditable);
            iloscDrzwiItem->setFlags(iloscDrzwiItem->flags() & ~Qt::ItemIsEditable);
            klimatyzacjaItem->setFlags(klimatyzacjaItem->flags() & ~Qt::ItemIsEditable);
            stanItem->setFlags(stanItem->flags() & ~Qt::ItemIsEditable);
            cenaItem->setFlags(cenaItem->flags() & ~Qt::ItemIsEditable);
            items.append(idItem);
            items.append(markaItem);
            items.append(modelItem);
            items.append(iloscDrzwiItem);
            items.append(klimatyzacjaItem);
            items.append(stanItem);
            items.append(cenaItem);
            modelSamochody->appendRow(items);
        }
    }
    file.close();
}

void UserMenu_2::zapiszSamochody() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/cars.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyćCCCC pliku cars.txt!";
        return;
    }
    QTextStream out(&file);
    for (int row = 0; row < modelSamochody->rowCount(); ++row) {
        QString id = modelSamochody->item(row, 0)->text();
        QString marka = modelSamochody->item(row, 1)->text();
        QString model = modelSamochody->item(row, 2)->text();
        QString iloscDrzwi = modelSamochody->item(row, 3)->text();
        QString klimatyzacja = modelSamochody->item(row, 4)->text();
        QString stan = modelSamochody->item(row, 5)->text();
        QString cena = modelSamochody->item(row, 6)->text();
        out << id << " " << marka << " " << model << " " << iloscDrzwi << " "
            << klimatyzacja << " " << stan << " " << cena << "\n";
    }
    file.close();
}

void UserMenu_2::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_u2 = new MainWindow(this);
    mainwindow_u2->show();
}

void UserMenu_2::on_pushButton_Wstecz_clicked()
{
    hide();
    usermenu_u2 = new UserMenu(this, userLogin);
    usermenu_u2->show();
    usermenu_u2->refreshUserMenu3();
}


void UserMenu_2::on_pushButton_Sprawdz_clicked()
{
    QString idSamochodu = ui->lineEdit_PodajID->text();
    int ileDni = ui->lineEdit_IleDni->text().toInt();

    if (ileDni <= 0) {
        QMessageBox::warning(this, "Błąd", "Liczba dni musi być większa niż 0.");
        return;
    }

    for (int row = 0; row < modelSamochody->rowCount(); ++row) {
        QString currentId = modelSamochody->item(row, 0)->text();
        QString stan = modelSamochody->item(row, 5)->text();
        if (currentId == idSamochodu) {
            if (stan == "Dostępny") {
                double cena = modelSamochody->item(row, 6)->text().toDouble() * ileDni;
                ui->label_Cena->setText(QString::number(cena) + " zł");
                QDate koncowaData = QDate::currentDate().addDays(ileDni);
                ui->label_KoncowaData->setText(koncowaData.toString("yyyy-MM-dd"));
            } else {
                QMessageBox::warning(this, "Błąd", "Samochód jest niedostępny.");
            }
            return;
        }
    }
    QMessageBox::warning(this, "Błąd", "Nie znaleziono samochodu o podanym ID.");
}


void UserMenu_2::on_pushButton_Zaplac_Wypozycz_clicked()
{
    QString idSamochodu = ui->lineEdit_PodajID->text();
    int ileDni = ui->lineEdit_IleDni->text().toInt();
    QString metodaPlatnosci = ui->radioButton_Blik->isChecked() ? "BLIK" : "Karta";

    if (idSamochodu.isEmpty() || ileDni <= 0 || (!ui->radioButton_Blik->isChecked() && !ui->radioButton_Karta->isChecked())) {
        QMessageBox::warning(this, "Błąd", "Proszę wypełnić wszystkie wymagane pola.");
        return;
    }

    for (int row = 0; row < modelSamochody->rowCount(); ++row) {
        QString currentId = modelSamochody->item(row, 0)->text();
        QString stan = modelSamochody->item(row, 5)->text();
        if (currentId == idSamochodu) {
            if (stan == "Dostępny") {
                modelSamochody->item(row, 5)->setText("Niedostępny");
                zapiszSamochody();

                QDate koncowaData = QDate::currentDate().addDays(ileDni);
                double cena = modelSamochody->item(row, 6)->text().toDouble() * ileDni;

                // Zapis aktualnych rezerwacji
                QFile rezerwacjeFile("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
                if (rezerwacjeFile.open(QIODevice::Append | QIODevice::Text)) {
                    QTextStream out(&rezerwacjeFile);
                    out << userLogin << " " << idSamochodu << " "
                        << modelSamochody->item(row, 1)->text() << " "
                        << modelSamochody->item(row, 2)->text() << " "
                        << QDate::currentDate().toString("yyyy-MM-dd") << " "
                        << koncowaData.toString("yyyy-MM-dd") << "\n";
                    rezerwacjeFile.close();
                }

                // Zapis historii transakcji
                QFile historiaFile("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/historia_transakcji.txt");
                if (historiaFile.open(QIODevice::Append | QIODevice::Text)) {
                    QTextStream out(&historiaFile);
                    out << userLogin << " " << idSamochodu << " "
                        << modelSamochody->item(row, 1)->text() << " "
                        << modelSamochody->item(row, 2)->text() << " "
                        << QDate::currentDate().toString("yyyy-MM-dd") << " "
                        << koncowaData.toString("yyyy-MM-dd") << " "
                        << cena << " " << metodaPlatnosci << "\n";
                    historiaFile.close();
                }

                QMessageBox::information(this, "Sukces", "Samochód został wypożyczony.");
                return;
            } else {
                QMessageBox::warning(this, "Błąd", "Samochód jest niedostępny.");
            }
            return;
        }
    }
    QMessageBox::warning(this, "Błąd", "Nie znaleziono samochodu o podanym ID.");
}











