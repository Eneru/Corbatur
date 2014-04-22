#ifndef MODIFGROUPDIALOG_H
#define MODIFGROUPDIALOG_H

#include <QDialog>

namespace Ui {
class ModifGroupDialog;
}

class ModifGroupDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModifGroupDialog(QWidget *parent = 0);
    ~ModifGroupDialog();
    
private:
    Ui::ModifGroupDialog *ui;
};

#endif // MODIFGROUPDIALOG_H
