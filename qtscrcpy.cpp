#include "qtscrcpy.h"
#include "ui_qtscrcpy.h"
#include <QProcess>

Qtscrcpy::Qtscrcpy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Qtscrcpy)
{
    ui->setupUi(this);
}

Qtscrcpy::~Qtscrcpy()
{
    delete ui;
}



void Qtscrcpy::on_pushButton_clicked()
{

    QObject *parent;
    parent = this;
    QString program = "..\\qtscrcpy_finshed\\third_exe\\cmd1.bat";
    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, Q_NULLPTR);
}

void Qtscrcpy::on_pushButton_2_clicked()
{
    QObject *parent;
    parent = this;
    QString program = "..\\qtscrcpy_finshed\\third_exe\\cmd2.bat";
    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, Q_NULLPTR);
}

void Qtscrcpy::on_pushButton_3_clicked()
{
    QObject *parent;
    parent = this;
    QString program = "..\\qtscrcpy_finshed\\third_exe\\cmd3.bat";
    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, Q_NULLPTR);
}
