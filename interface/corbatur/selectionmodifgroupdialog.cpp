#include "selectionmodifgroupdialog.h"
#include "ui_selectionmodifgroupdialog.h"

SelectionModifGroupDialog::SelectionModifGroupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectionModifGroupDialog)
{
    ui->setupUi(this);
}

SelectionModifGroupDialog::~SelectionModifGroupDialog()
{
    delete ui;
}
