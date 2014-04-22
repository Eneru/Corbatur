#ifndef SUPPRESSIONPERSONNEDIALOG_H
#define SUPPRESSIONPERSONNEDIALOG_H

#include <QDialog>

namespace Ui {
class SuppressionPersonneDialog;
}

class SuppressionPersonneDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SuppressionPersonneDialog(QWidget *parent = 0);
    ~SuppressionPersonneDialog();
    
private:
    Ui::SuppressionPersonneDialog *ui;
};

#endif // SUPPRESSIONPERSONNEDIALOG_H
