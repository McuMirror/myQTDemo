#include "msgboxdlg.h"
#include <QMessageBox>

MsgBoxDlg::MsgBoxDlg(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(QString::fromLocal8Bit("标准消息对话框的实例"));              //设置对话框的标题
    label = new QLabel;
    label->setText(QString::fromLocal8Bit("请选择一种消息框"));

    questionBtn = new QPushButton;
    questionBtn->setText(QString::fromLocal8Bit("QuestionMsg"));

    informationBtn = new QPushButton;
    informationBtn->setText(QString::fromLocal8Bit("InformationMsg"));

    warningBtn = new QPushButton;
    warningBtn->setText(QString::fromLocal8Bit("WarningMsg"));

    criticalBtn = new QPushButton;
    criticalBtn->setText(QString::fromLocal8Bit("CriticalMsg"));

    aboutBtn = new QPushButton;
    aboutBtn->setText(QString::fromLocal8Bit("AboutMsg"));

    aboutQtBtn = new QPushButton;
    aboutQtBtn->setText(QString::fromLocal8Bit("AboutQtMsg"));

    //布局
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label,0,0,1,2);
    mainLayout->addWidget(questionBtn,1,0);
    mainLayout->addWidget(informationBtn,1,1);
    mainLayout->addWidget(warningBtn,2,0);
    mainLayout->addWidget(criticalBtn,2,1);
    mainLayout->addWidget(aboutBtn,3,0);
    mainLayout->addWidget(aboutQtBtn,3,1);

    //事件关联
    connect(questionBtn,SIGNAL(clicked()),this,SLOT(showQuestionMsg()));
    connect(informationBtn,SIGNAL(clicked()),this,SLOT(showInformationMsg()));
    connect(warningBtn,SIGNAL(clicked()),this,SLOT(showWarningMsg()));
    connect(criticalBtn,SIGNAL(clicked()),this,SLOT(showCriticalMsg()));
    connect(aboutBtn,SIGNAL(clicked()),this,SLOT(showAboutMsg()));
    connect(aboutQtBtn,SIGNAL(clicked()),this,SLOT(showAboutQtMsg()));
}

void MsgBoxDlg::showQuestionMsg()
{
    label->setText(QString::fromLocal8Bit("Question Message Box"));
    switch(QMessageBox::question(this, QString::fromLocal8Bit("Question Message"),
         QString::fromLocal8Bit("you have completed, if you want to end this"),
         QMessageBox::Ok | QMessageBox::Cancel,
         QMessageBox::Ok))
    {
    case QMessageBox::Ok:
        label->setText("Question button/Ok");
        break;
    case QMessageBox::Cancel:
        label->setText("Question button/Cancel");
        break;
    default:
        break;
    }
    return;
}
void MsgBoxDlg::showInformationMsg()
{
    label->setText(QString::fromLocal8Bit("Information Message Box"));
    QMessageBox::information(this,QString::fromLocal8Bit("Information Message Frame"),
                             QString::fromLocal8Bit("this is information test, Welcome"));
    return;
}
void MsgBoxDlg::showWarningMsg()
{
    label->setText(QString::fromLocal8Bit("Warning Message Box"));
    switch(QMessageBox::warning(this,QString::fromLocal8Bit("Warning Message"),
         QString::fromLocal8Bit("您修改的内容还未保存,是否要保存对文档的修改？"),
         QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel,
         QMessageBox::Save))
    {
    case QMessageBox::Save:
        label->setText(QString::fromLocal8Bit("Warning button/Save"));
        break;
    case QMessageBox::Discard:
        label->setText(QString::fromLocal8Bit("Warning button/Discard"));
        break;
    case QMessageBox::Cancel:
        label->setText(QString::fromLocal8Bit("Warning button/Cancel"));
        break;
    default:
        break;
    }
    return;
}

void MsgBoxDlg::showCriticalMsg()
{
    label->setText(QString::fromLocal8Bit("Critical Message Box"));
    QMessageBox::critical(this,QString::fromLocal8Bit("Critical Message"),QString::fromLocal8Bit("this is critical message"));
    return;
}

void MsgBoxDlg::showAboutMsg()
{
    label->setText(QString::fromLocal8Bit("About Message Box"));
    QMessageBox::about(this,QString::fromLocal8Bit("About"),QString::fromLocal8Bit("this is about message"));
    return;
}

void MsgBoxDlg::showAboutQtMsg()
{
    label->setText(QString::fromLocal8Bit("About Qt Message Box"));
    QMessageBox::aboutQt(this,QString::fromLocal8Bit("About Qt Message"));
    return;
}


