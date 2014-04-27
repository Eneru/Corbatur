#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ajoutdialog.h"
#include "creategroupdialog.h"
#include "modifgroupdialog.h"
#include "modifprofildialog.h"
#include "selectionmodifgroupdialog.h"
#include "suppressionpersonnedialog.h"
#include "versiondialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void version();
    void ajout_ctct();
    void creer_grp();
    void modif_grp();
    void modif_profil();
    void suppr_contact();
    void aide_corbatur();

    void enablement_envoie();
    void envoie();
}
#endif // MAINWINDOW_H
