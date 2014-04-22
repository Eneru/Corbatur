#ifndef MODIFPROFILDIALOG_H
#define MODIFPROFILDIALOG_H

#include <QDialog>

namespace Ui {
class ModifProfilDialog;
}

class ModifProfilDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModifProfilDialog(QWidget *parent = 0);
    ~ModifProfilDialog();
    
private:
    Ui::ModifProfilDialog *ui;
};

#endif // MODIFPROFILDIALOG_H
