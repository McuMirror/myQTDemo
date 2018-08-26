#include "extensiondlg.h"
#include "ui_extensiondlg.h"

#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDialogButtonBox>

extensiondlg::extensiondlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::extensiondlg)
{
    ui->setupUi(this);

    setWindowTitle(QString::fromLocal8Bit("Extension Dialog"));

    createBaseInfo();
    createDetailInfo();

    QVBoxLayout *layout =new QVBoxLayout(this);                 //布局
    layout->addWidget(baseWidget);
    layout->addWidget(detailWidget);
    layout->setSizeConstraint(QLayout::SetFixedSize);
    layout->setSpacing(10);
}

extensiondlg::~extensiondlg()
{
    delete ui;
}

void extensiondlg::createBaseInfo()
{
    baseWidget = new QWidget;

    QLabel *nameLabel = new QLabel(QString::fromLocal8Bit("姓名："));
    QLineEdit *nameLineEdit = new QLineEdit;

    QLabel *sexLabel = new QLabel(QString::fromLocal8Bit("性别："));
    QComboBox *sexComboBox = new  QComboBox;
    sexComboBox->insertItem(0,QString::fromLocal8Bit("女"));
    sexComboBox->insertItem(1,QString::fromLocal8Bit("男"));

    QGridLayout *LeftLayout = new QGridLayout;
    LeftLayout->addWidget(nameLabel,0,0);
    LeftLayout->addWidget(nameLineEdit,0,1);
    LeftLayout->addWidget(sexLabel);
    LeftLayout->addWidget(sexComboBox);

    QPushButton *oKBtn = new QPushButton(QString::fromLocal8Bit("确定"));
    QPushButton *detailBtn = new QPushButton(QString::fromLocal8Bit("详细"));
    QDialogButtonBox *btnBox = new QDialogButtonBox(Qt::Vertical);
    btnBox->addButton(oKBtn,QDialogButtonBox::ActionRole);
    btnBox->addButton(detailBtn,QDialogButtonBox::ActionRole);

    QHBoxLayout *mainLayout = new QHBoxLayout(baseWidget);
    mainLayout->addLayout(LeftLayout);
    mainLayout->addWidget(btnBox);
    connect(detailBtn,SIGNAL(clicked()),this,SLOT(showDetailInfo()));
}

void extensiondlg::createDetailInfo()
{
    detailWidget = new QWidget;

    QLabel *ageLabel = new QLabel(QString::fromLocal8Bit("年龄："));
    QLineEdit *ageLineEdit = new QLineEdit;
    ageLineEdit->setText(QString::fromLocal8Bit("30"));

    QLabel *departmentLabel = new QLabel(QString::fromLocal8Bit("部门："));
    QComboBox *departmentComBox = new QComboBox;
    departmentComBox->addItem(QString::fromLocal8Bit("部门1"));
    departmentComBox->addItem(QString::fromLocal8Bit("部门2"));
    departmentComBox->addItem(QString::fromLocal8Bit("部门3"));
    departmentComBox->addItem(QString::fromLocal8Bit("部门4"));

    QLabel *emailLabel = new QLabel(QString::fromLocal8Bit("email："));
    QLineEdit *emailLineEdit = new QLineEdit;

    QGridLayout *mainLayout = new QGridLayout(detailWidget);
    mainLayout->addWidget(ageLabel,0,0);
    mainLayout->addWidget(ageLineEdit,0,1);
    mainLayout->addWidget(departmentLabel,1,0);
    mainLayout->addWidget(departmentComBox,1,1);
    mainLayout->addWidget(emailLabel,2,0);
    mainLayout->addWidget(emailLineEdit,2,1);

    detailWidget->hide();
}

void extensiondlg::showDetailInfo()
{
    if(detailWidget->isHidden())
        detailWidget->show();
    else
        detailWidget->hide();
}
