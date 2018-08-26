/********************************************************************************
** Form generated from reading UI file 'datasetselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASETSELECTDIALOG_H
#define UI_DATASETSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DataSetSelectDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *description_image;
    QLabel *description;
    QLabel *selectLabel;
    QComboBox *selectBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataSetSelectDialog)
    {
        if (DataSetSelectDialog->objectName().isEmpty())
            DataSetSelectDialog->setObjectName(QStringLiteral("DataSetSelectDialog"));
        DataSetSelectDialog->setEnabled(true);
        DataSetSelectDialog->resize(422, 160);
        DataSetSelectDialog->setMinimumSize(QSize(400, 160));
        DataSetSelectDialog->setMaximumSize(QSize(600, 195));
        QFont font;
        font.setPointSize(12);
        DataSetSelectDialog->setFont(font);
        gridLayout = new QGridLayout(DataSetSelectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        description_image = new QLabel(DataSetSelectDialog);
        description_image->setObjectName(QStringLiteral("description_image"));
        description_image->setMinimumSize(QSize(40, 40));
        description_image->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setPointSize(11);
        description_image->setFont(font1);
        description_image->setTextFormat(Qt::RichText);
        description_image->setWordWrap(true);

        gridLayout->addWidget(description_image, 0, 0, 1, 1);

        description = new QLabel(DataSetSelectDialog);
        description->setObjectName(QStringLiteral("description"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMinimumSize(QSize(350, 40));
        description->setMaximumSize(QSize(0, 110));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(11);
        description->setFont(font2);
        description->setTextFormat(Qt::RichText);
        description->setWordWrap(true);

        gridLayout->addWidget(description, 0, 1, 1, 1);

        selectLabel = new QLabel(DataSetSelectDialog);
        selectLabel->setObjectName(QStringLiteral("selectLabel"));
        selectLabel->setFont(font2);

        gridLayout->addWidget(selectLabel, 1, 0, 1, 1);

        selectBox = new QComboBox(DataSetSelectDialog);
        selectBox->setObjectName(QStringLiteral("selectBox"));
        selectBox->setEnabled(true);
        selectBox->setMinimumSize(QSize(300, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans"));
        font3.setPointSize(10);
        selectBox->setFont(font3);
        selectBox->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(selectBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(DataSetSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(DataSetSelectDialog);

        QMetaObject::connectSlotsByName(DataSetSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *DataSetSelectDialog)
    {
        DataSetSelectDialog->setWindowTitle(QApplication::translate("DataSetSelectDialog", "Select Data Set", Q_NULLPTR));
        description_image->setText(QApplication::translate("DataSetSelectDialog", "<html><head/><body><p><img width=\"40\" height=\"40\"  src=\":/images/socnetv-32px.png\"/></p></body></html>", Q_NULLPTR));
        description->setText(QApplication::translate("DataSetSelectDialog", "SocNetV is able to automatically create known data sets, such as Padgett's florentine families etc. \n"
"Select the data set you want to re-create from the list: ", Q_NULLPTR));
        selectLabel->setText(QApplication::translate("DataSetSelectDialog", "Select", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectBox->setToolTip(QApplication::translate("DataSetSelectDialog", "<html><head/><body><p>Click to select a data set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DataSetSelectDialog: public Ui_DataSetSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASETSELECTDIALOG_H
