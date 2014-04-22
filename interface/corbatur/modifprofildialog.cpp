#include "modifprofildialog.h"
#include "ui_modifprofildialog.h"

ModifProfilDialog::ModifProfilDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifProfilDialog)
{
    ui->setupUi(this);
}

ModifProfilDialog::~ModifProfilDialog()
{
    delete ui;
}
