#include "ajoutdialog.h"
#include "ui_ajoutdialog.h"

AjoutDialog::AjoutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutDialog)
{
    ui->setupUi(this);
}

AjoutDialog::~AjoutDialog()
{
    delete ui;
}
