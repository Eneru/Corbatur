#ifndef AJOUTDIALOG_H
#define AJOUTDIALOG_H

#include <QDialog>

namespace Ui {
class AjoutDialog;
}

class AjoutDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AjoutDialog(QWidget *parent = 0);
    ~AjoutDialog();
    
private:
    Ui::AjoutDialog *ui;
};

#endif // AJOUTDIALOG_H
