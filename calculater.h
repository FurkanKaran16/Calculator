#ifndef CALCULATER_H
#define CALCULATER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculater;
}
QT_END_NAMESPACE

class Calculater : public QMainWindow
{
    Q_OBJECT

public:
    Calculater(QWidget *parent = nullptr);
    ~Calculater();

private:
    Ui::Calculater *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void SquareRootPressed();
    //void on_Clear_clicked();
    void ClearPressed();
    void MinusPressed();
    void DotPressed();

};
#endif // CALCULATER_H
