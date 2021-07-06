#ifndef ACERCATFM_H
#define ACERCATFM_H

#include <QDialog>

namespace Ui {
class acercaTFM;
}

class acercaTFM : public QDialog
{
    Q_OBJECT

public:
    explicit acercaTFM(QWidget *parent = nullptr);
    ~acercaTFM();

private slots:
    void on_pushButton_clicked();

private:
    Ui::acercaTFM *ui;
};

#endif // ACERCATFM_H
