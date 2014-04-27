#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Init menu
    QObject::connect(ui->actionVersion,SIGNAL(triggered()),this,SLOT(version()),Qt::AutoConnection);
    QObject::connect(ui->actionAjoutContact,SIGNAL(triggered()),this,SLOT(ajout_ctct()),Qt::AutoConnection);
    QObject::connect(ui->actionCreerGroup,SIGNAL(triggered()),this,SLOT(creer_grp()),Qt::AutoConnection);
    QObject::connect(ui->actionModifGroup,SIGNAL(triggered()),this,SLOT(modif_grp()),Qt::AutoConnection);
    QObject::connect(ui->actionModifProfil,SIGNAL(triggered()),this,SLOT(modif_profil()),Qt::AutoConnection);
    QObject::connect(ui->actionSuppressionContact,SIGNAL(triggered()),this,SLOT(suppr_contact()),Qt::AutoConnection);
    QObject::connect(ui->actionaideCorbatur,SIGNAL(triggered()),this,SLOT(aide_corbatur()),Qt::AutoConnection);

    // Init dialog + button
    QObject::connect(ui->ecritureDiscussion,SIGNAL(textChanged()),this,SLOT(enablement_envoie()),Qt::AutoConnection);
    QObject::connect(ui->bouttonEnvoie,SIGNAL(clicked()),this,SLOT(envoie()),Qt::AutoConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::version()
{
    VersionDialog vd(this);
    vd.exec();
}

void MainWindow::ajout_ctct()
{
    AjoutDialog ad(this);
    ad.exec();
}

void MainWindow::creer_grp()
{
    CreateGroupDialog cgd(this);
    cgd.exec();
}

void MainWindow::modif_grp()
{
    ModifGroupDialog mgd(this);
    mgd.exec();
}

void MainWindow::modif_profil()
{
    ModifProfilDialog mpd(this);
    mpd.exec();
}

void MainWindow::suppr_contact()
{
    SuppressionPersonneDialog spd(this);
    spd.exec();
}

void MainWindow::aide_corbatur()
{

}

void MainWindow::enablement_envoie()
{
    if (ui->ecritureDiscussion->toPlainText().isEmpty())
        ui->bouttonEnvoie->setEnabled(false);
    else
        ui->bouttonEnvoie->setEnabled(true);
}

void MainWindow::envoie()
{

}
