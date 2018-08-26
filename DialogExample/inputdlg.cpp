#include "inputdlg.h"
#include <QInputDialog>

InputDlg::InputDlg(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(QString::fromLocal8Bit("标准输入对话框的实例"));

    nameLabel1 =new QLabel;
    nameLabel1->setText(QString::fromLocal8Bit("名字:"));
    nameLabel2 =new QLabel;
    nameLabel2->setText(QString::fromLocal8Bit("张三"));                    	//姓名的初始值
    nameLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    nameBtn =new QPushButton;
    nameBtn->setText(QString::fromLocal8Bit("修改姓名"));

    sexLabel1 =new QLabel;
    sexLabel1->setText(QString::fromLocal8Bit("性别:"));
    sexLabel2 =new QLabel;
    sexLabel2->setText(QString::fromLocal8Bit("男"));                       	//性别的初始值
    sexLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    sexBtn =new QPushButton;
    sexBtn->setText(QString::fromLocal8Bit("修改性别"));

    ageLabel1 =new QLabel;
    ageLabel1->setText(QString::fromLocal8Bit("年龄:"));
    ageLabel2 =new QLabel;
    ageLabel2->setText(QString::fromLocal8Bit("21"));                       //年龄的初始值
    ageLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    ageBtn =new QPushButton;
    ageBtn->setText(QString::fromLocal8Bit("修改年龄"));

    scoreLabel1 =new QLabel;
    scoreLabel1->setText(QString::fromLocal8Bit("成绩:"));
    scoreLabel2 =new QLabel;
    scoreLabel2->setText(QString::fromLocal8Bit("80"));                 	//成绩的初始值
    scoreLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    scoreBtn =new QPushButton;
    scoreBtn->setText(QString::fromLocal8Bit("修改成绩"));

    mainLayout =new QGridLayout(this);
    mainLayout->addWidget(nameLabel1,0,0);
    mainLayout->addWidget(nameLabel2,0,1);
    mainLayout->addWidget(nameBtn,0,2);

    mainLayout->addWidget(sexLabel1,1,0);
    mainLayout->addWidget(sexLabel2,1,1);
    mainLayout->addWidget(sexBtn,1,2);

    mainLayout->addWidget(ageLabel1,2,0);
    mainLayout->addWidget(ageLabel2,2,1);
    mainLayout->addWidget(ageBtn,2,2);

    mainLayout->addWidget(scoreLabel1,3,0);
    mainLayout->addWidget(scoreLabel2,3,1);
    mainLayout->addWidget(scoreBtn,3,2);

    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    connect(nameBtn,SIGNAL(clicked()),this,SLOT(ChangeName()));
    connect(sexBtn,SIGNAL(clicked()),this,SLOT(ChangeSex()));
    connect(ageBtn,SIGNAL(clicked()),this,SLOT(ChangeAge()));
    connect(scoreBtn,SIGNAL(clicked()),this,SLOT(ChangeScore()));
}

void InputDlg::ChangeName()
{
    bool ok;
    QString text=QInputDialog::getText(this,QString::fromLocal8Bit("标准字符串输入对话框"),QString::fromLocal8Bit("请输入姓名："), QLineEdit::Normal,nameLabel2->text(),&ok);
    if (ok && !text.isEmpty())
        nameLabel2->setText(text);
}

void InputDlg::ChangeSex()
{
    QStringList SexItems;
    SexItems << QString::fromLocal8Bit("man") << QString::fromLocal8Bit("woman");

    bool ok;
    QString SexItem = QInputDialog::getItem(this, QString::fromLocal8Bit("strandard item select frame"),
      QString::fromLocal8Bit("please select sex:"), SexItems, 0, false, &ok);
    if (ok && !SexItem.isEmpty())
        sexLabel2->setText(SexItem);
}

void InputDlg::ChangeAge()
{
    bool ok;
    int age = QInputDialog::getInt(this, QString::fromLocal8Bit("strandard int input frame"),
     QString::fromLocal8Bit("please inpute age"), ageLabel2->text().toInt(&ok), 0, 100, 1, &ok);
    if (ok)
        ageLabel2->setText(QString(QString::fromLocal8Bit("%1")).arg(age));
}

void InputDlg::ChangeScore()
{
    bool ok;
    double score = QInputDialog::getDouble(this, QString::fromLocal8Bit("strandard double input frame"),
     QString::fromLocal8Bit("please input score:"),scoreLabel2->text().toDouble(&ok), 0, 100, 1, &ok);
    if(ok)
        scoreLabel2->setText(QString(QString::fromLocal8Bit("%1")).arg(score));
}


