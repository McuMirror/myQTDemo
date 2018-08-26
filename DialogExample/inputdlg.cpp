#include "inputdlg.h"
#include <QInputDialog>

InputDlg::InputDlg(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(QString::fromLocal8Bit("��׼����Ի����ʵ��"));

    nameLabel1 =new QLabel;
    nameLabel1->setText(QString::fromLocal8Bit("����:"));
    nameLabel2 =new QLabel;
    nameLabel2->setText(QString::fromLocal8Bit("����"));                    	//�����ĳ�ʼֵ
    nameLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    nameBtn =new QPushButton;
    nameBtn->setText(QString::fromLocal8Bit("�޸�����"));

    sexLabel1 =new QLabel;
    sexLabel1->setText(QString::fromLocal8Bit("�Ա�:"));
    sexLabel2 =new QLabel;
    sexLabel2->setText(QString::fromLocal8Bit("��"));                       	//�Ա�ĳ�ʼֵ
    sexLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    sexBtn =new QPushButton;
    sexBtn->setText(QString::fromLocal8Bit("�޸��Ա�"));

    ageLabel1 =new QLabel;
    ageLabel1->setText(QString::fromLocal8Bit("����:"));
    ageLabel2 =new QLabel;
    ageLabel2->setText(QString::fromLocal8Bit("21"));                       //����ĳ�ʼֵ
    ageLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    ageBtn =new QPushButton;
    ageBtn->setText(QString::fromLocal8Bit("�޸�����"));

    scoreLabel1 =new QLabel;
    scoreLabel1->setText(QString::fromLocal8Bit("�ɼ�:"));
    scoreLabel2 =new QLabel;
    scoreLabel2->setText(QString::fromLocal8Bit("80"));                 	//�ɼ��ĳ�ʼֵ
    scoreLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    scoreBtn =new QPushButton;
    scoreBtn->setText(QString::fromLocal8Bit("�޸ĳɼ�"));

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
    QString text=QInputDialog::getText(this,QString::fromLocal8Bit("��׼�ַ�������Ի���"),QString::fromLocal8Bit("������������"), QLineEdit::Normal,nameLabel2->text(),&ok);
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


