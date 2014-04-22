#include "modifgroupdialog.h"
#include "ui_modifgroupdialog.h"

ModifGroupDialog::ModifGroupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifGroupDialog)
{
    ui->setupUi(this);
}

ModifGroupDialog::~ModifGroupDialog()
{
    delete ui;
}
