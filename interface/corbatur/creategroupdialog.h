#ifndef CREATEGROUPDIALOG_H
#define CREATEGROUPDIALOG_H

#include <QDialog>

namespace Ui {
class CreateGroupDialog;
}

class CreateGroupDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateGroupDialog(QWidget *parent = 0);
    ~CreateGroupDialog();
    
private:
    Ui::CreateGroupDialog *ui;
};

#endif // CREATEGROUPDIALOG_H