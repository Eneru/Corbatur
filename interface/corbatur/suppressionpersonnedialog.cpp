#include "suppressionpersonnedialog.h"
#include "ui_suppressionpersonnedialog.h"

SuppressionPersonneDialog::SuppressionPersonneDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuppressionPersonneDialog)
{
    ui->setupUi(this);
}

SuppressionPersonneDialog::~SuppressionPersonneDialog()
{
    delete ui;
}
