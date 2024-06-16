#include "adminmenu_2.h"
#include "ui_adminmenu_2.h"
#include "mainwindow.h"
#include "adminmenu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>
#include <QDebug>

MainWindow *mainwindow_a2;
AdminMenu *adminmenu_a2;

AdminMenu_2::AdminMenu_2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminMenu_2)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AdminMenu_2::updateDateTime);
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
    modelSamochody->setHeaderData(5, Qt::Horizontal, "Dostępność");
    modelSamochody->setHeaderData(6, Qt::Horizontal, "Cena");
    ui->tableView_BazaSamochodow->setModel(modelSamochody);
    ui->tableView_BazaSamochodow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie samochodów z pliku
    wczytajSamochody();
}

AdminMenu_2::~AdminMenu_2()
{
    delete ui;
}

void AdminMenu_2::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void AdminMenu_2::wczytajSamochody() {
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

void AdminMenu_2::zapiszSamochody()
{
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/cars.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku cars.txt!";
        return;
    }
    QTextStream out(&file);
    for (int row = 0; row < modelSamochody->rowCount(); ++row) {
        QString id = modelSamochody->item(row, 0)->text();
        QString marka = modelSamochody->item(row, 1)->text();
        QString model = modelSamochody->item(row, 2)->text();
        QString iloscDrzwi = modelSamochody->item(row, 3)->text();
        QString klimatyzacja = modelSamochody->item(row, 4)->text();
        QString dostepnosc = modelSamochody->item(row, 5)->text();
        QString cena = modelSamochody->item(row, 6)->text();
        out << id << " " << marka << " " << model << " " << iloscDrzwi << " " << klimatyzacja << " " << dostepnosc <<" "<< cena << "\n";
    }
    file.close();
}

void AdminMenu_2::on_pushButton_Dodaj_clicked()
{
    QString marka = ui->lineEdit_Marka->text();
    QString model = ui->lineEdit_Model->text();
    QString iloscDrzwi = ui->lineEdit_IloscDrzwi->text();
    QString klimatyzacja = ui->lineEdit_Klimatyzacja->text();
    QString cena = ui->lineEdit_Cena->text();

    if (marka.isEmpty() || model.isEmpty() || iloscDrzwi.isEmpty() || klimatyzacja.isEmpty() || cena.isEmpty()) {
        QMessageBox::warning(this, "Błąd", "Proszę wypełnić wszystkie pola.");
        return;
    }

    bool isCenaValid;
    double cenaValue = cena.toDouble(&isCenaValid);
    if (!isCenaValid || cenaValue <= 0) {
        QMessageBox::warning(this, "Błąd", "Cena musi być liczbą większą od 0.");
        return;
    }

    bool isIloscDrzwiValid;
    int iloscDrzwiValue = iloscDrzwi.toInt(&isIloscDrzwiValid);
    if (!isIloscDrzwiValid || iloscDrzwiValue <= 0) {
        QMessageBox::warning(this, "Błąd", "Ilość drzwi musi być liczbą większą od 0.");
        return;
    }

    if (klimatyzacja != "Tak" && klimatyzacja != "Nie") {
        QMessageBox::warning(this, "Błąd", "Klimatyzacja może być tylko 'Tak' lub 'Nie'.");
        return;
    }

    int nextId = modelSamochody->rowCount() + 1;
    QString id = QString::number(nextId).rightJustified(3, '0');
    QString dostepnosc = "Dostępny";

    QList<QStandardItem *> items;
    items.append(new QStandardItem(id));
    items.append(new QStandardItem(marka));
    items.append(new QStandardItem(model));
    items.append(new QStandardItem(iloscDrzwi));
    items.append(new QStandardItem(klimatyzacja));
    items.append(new QStandardItem(dostepnosc));
    items.append(new QStandardItem(QString::number(cenaValue)));

    for (QStandardItem *item : items) {
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    }

    modelSamochody->appendRow(items);
    zapiszSamochody();
    QMessageBox::information(this, "Sukces", "Samochód został dodany.");
}



void AdminMenu_2::on_pushButton_Usun_clicked()
{
    QString idUsun = ui->lineEdit_UsunSamochod->text();

    bool found = false;
    for (int row = 0; row < modelSamochody->rowCount(); ++row) {
        if (modelSamochody->item(row, 0)->text() == idUsun) {
            QString dostepnosc = modelSamochody->item(row, 5)->text();
            if (dostepnosc == "Niedostępny") {
                QMessageBox::warning(this, "Błąd", "Samochód jest zarezerwowany i nie może być usunięty.");
                return;
            }

            modelSamochody->removeRow(row);
            zapiszSamochody();
            QMessageBox::information(this, "Sukces", "Samochód został usunięty.");
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Błąd", "Nie znaleziono samochodu o podanym ID.");
    }
}

void AdminMenu_2::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_a2 = new MainWindow(this);
    mainwindow_a2->show();
}

void AdminMenu_2::on_pushButton_Wstecz_clicked()
{
    hide();
    adminmenu_a2 = new AdminMenu(this);
    adminmenu_a2->show();
}



