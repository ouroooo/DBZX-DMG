#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <string>
#include <iostream>

std::string code;
std::string snum;
std::string grade;
std::string allschool="http://14.18.102.167:17001/edei/g6!g6export.action?^&schoolNum=196,199,201,185,190,192,195,198,189,184,180,183,191,182,193,188,187,204,197,200,194,181,186,331,203,206,202,205^&classNum=^&studentType=0^&step=10^&mingcistep=100^&topStep=^&E5step=null^&B3mingcistep=null^&type=0^&c_exam=^&rpt_name=A2-%E5%85%A8%E7%A7%91%E6%88%90%E7%BB%A9^&source=0^&isHistory=F^&isMoreSchool=T^&rate=50^&islevelclass=F^&expTagType=null^&reCalcu=F^&fufen=0^&subCompose=0^&islevel=0^&rptTitle=%20%E5%AD%A6%E6%A0%A1:%20%20%20%E8%80%83%E8%AF%95%E7%B1%BB%E5%9E%8B:%E6%9C%9F%E6%9C%AB%E6%95%99%E5%AD%A6%E8%B4%A8%E9%87%8F%E7%9B%91%E6%B5%8B%20%20%20%E8%80%83%E8%AF%95%E6%97%B6%E9%97%B4:2025-07-07%20%20%20%E7%A7%91%E7%B1%BB:%E4%B8%8D%E5%88%86%E6%96%87%E7%90%86%20%20%20^&sch=1^&subRank=-1^&downRank=0^&scoreName=1^&shouxuanHide=0^&isShowSubCompose=0";
std::string inschool="http://14.18.102.167:17001/edei/g6!g6export.action?^&schoolNum=185^&studentType=0^&step=10^&mingcistep=100^&topStep=^&E5step=null^&B3mingcistep=null^&type=0^&sNum=6000^&c_exam=^&rpt_name=A2-%E5%85%A8%E7%A7%91%E6%88%90%E7%BB%A9^&source=0^&isHistory=F^&isMoreSchool=F^&rate=50^&islevelclass=F^&expTagType=null^&reCalcu=F^&fufen=0^&subCompose=0^&islevel=0^&rptTitle=QUJI^&sch=^&subRank=-1^&downRank=0^&scoreName=1^&shouxuanHide=0^&isShowSubCompose=0";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    system(R"(start http://14.18.102.167:17001/edei/)");
}

void MainWindow::on_inSchool_clicked()
{
    QString code1 = ui->inCode->text();
    code = code1.toStdString();
    QString grade1 = ui->ingrade->text();
    grade = grade1.toStdString();
    std::string inSchoolcode= inschool + "^&gradeNum=" + grade + "^&examNum=" + code;
    std::string cmd = "start " + inSchoolcode;
    system(cmd.c_str());
}


void MainWindow::on_getCode_clicked()
{
    system(R"(start http://14.18.102.167:17001/edei/qList!getExamAndGraAndSubData.action)");
}


void MainWindow::on_allSchool_clicked()
{
    QString code1 = ui->inCode->text();
    code = code1.toStdString();
    QString grade1 = ui->ingrade->text();
    grade = grade1.toStdString();
    QString snum1 = ui->inNum->text();
    snum = snum1.toStdString();
    std::string allSchoolcode= allschool + "^&gradeNum=" + grade + "^&examNum=" + code + "^&sNum=" + snum;
    std::string cmd = "start " + allSchoolcode;
    system(cmd.c_str());
}

