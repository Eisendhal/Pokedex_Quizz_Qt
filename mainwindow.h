#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pokedexclass.h"
#include "gameclass.h"
#include "pokemon.h"

// Header de la classe Mainwindow avec signaux et slots

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    PokedexClass* getPokedex();
    void setPokedex(PokedexClass *value);

    GameClass *getGame() const;
    void setGame(GameClass *value);

signals:
    void monSignal5();
    void monSignal4();
    void monSignal6(const QString &texte);
    void signalDetails(const QModelIndex &index);
    void dirty();
    void monSignal7();
    void monSignal8();
    void timerStart();
    void toExport();
    void toImport();


private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void tri_set_alpha();

    void tri_set_num();

    void tri_set_num_game();

    void tri_set_alpha_game();

    void on_tableView_clicked(const QModelIndex &index);

    void openDetails(const QModelIndex &index);

    void on_pushButton_6_clicked();

    void submitted(const QString &texte);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void updateLCD();

    void on_pushButton_3_clicked();

    void exportcsv();

    void on_pushButton_2_clicked();

    void importcsv();

    void onKeyPressed();

private:
    Ui::MainWindow *ui;
    PokedexClass *pokedex;
    GameClass * game;
};

#endif // MAINWINDOW_H
