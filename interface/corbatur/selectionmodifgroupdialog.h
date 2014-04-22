#ifndef SELECTIONMODIFGROUPDIALOG_H
#define SELECTIONMODIFGROUPDIALOG_H

#include <QDialog>

namespace Ui {
class SelectionModifGroupDialog;
}

class SelectionModifGroupDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SelectionModifGroupDialog(QWidget *parent = 0);
    ~SelectionModifGroupDialog();
    
private:
    Ui::SelectionModifGroupDialog *ui;
};

#endif // SELECTIONMODIFGROUPDIALOG_H
