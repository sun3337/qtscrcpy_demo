#ifndef QTSCRCPY_H
#define QTSCRCPY_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Qtscrcpy; }
QT_END_NAMESPACE


class Qtscrcpy : public QMainWindow
{
    Q_OBJECT

public:
    Qtscrcpy(QWidget *parent = nullptr);
    ~Qtscrcpy();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Qtscrcpy *ui;

};
#endif // QTSCRCPY_H
