/********************************************************************************
** Form generated from reading UI file 'filteredgesbyweightdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTEREDGESBYWEIGHTDIALOG_H
#define UI_FILTEREDGESBYWEIGHTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_FilterEdgesByWeightDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *weightThreshold;
    QRadioButton *overThresholdBt;
    QRadioButton *belowThresholdBt;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterEdgesByWeightDialog)
    {
        if (FilterEdgesByWeightDialog->objectName().isEmpty())
            FilterEdgesByWeightDialog->setObjectName(QStringLiteral("FilterEdgesByWeightDialog"));
        FilterEdgesByWeightDialog->resize(400, 210);
        FilterEdgesByWeightDialog->setMinimumSize(QSize(400, 210));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        FilterEdgesByWeightDialog->setFont(font);
        gridLayout = new QGridLayout(FilterEdgesByWeightDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(FilterEdgesByWeightDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(FilterEdgesByWeightDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        weightThreshold = new QDoubleSpinBox(FilterEdgesByWeightDialog);
        weightThreshold->setObjectName(QStringLiteral("weightThreshold"));
        weightThreshold->setFont(font1);
        weightThreshold->setDecimals(1);
        weightThreshold->setMinimum(-100);

        horizontalLayout->addWidget(weightThreshold);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        overThresholdBt = new QRadioButton(FilterEdgesByWeightDialog);
        overThresholdBt->setObjectName(QStringLiteral("overThresholdBt"));
        overThresholdBt->setFont(font1);

        gridLayout->addWidget(overThresholdBt, 2, 0, 1, 1);

        belowThresholdBt = new QRadioButton(FilterEdgesByWeightDialog);
        belowThresholdBt->setObjectName(QStringLiteral("belowThresholdBt"));
        belowThresholdBt->setFont(font1);

        gridLayout->addWidget(belowThresholdBt, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FilterEdgesByWeightDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(FilterEdgesByWeightDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilterEdgesByWeightDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilterEdgesByWeightDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterEdgesByWeightDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterEdgesByWeightDialog)
    {
        FilterEdgesByWeightDialog->setWindowTitle(QApplication::translate("FilterEdgesByWeightDialog", "Filter edges", Q_NULLPTR));
        label_2->setText(QApplication::translate("FilterEdgesByWeightDialog", "With this temporary action, you will make invisible some links according to their weight. Select a threshold then click on the desired radiobox below:", Q_NULLPTR));
        label->setText(QApplication::translate("FilterEdgesByWeightDialog", "Weight Threshold", Q_NULLPTR));
        overThresholdBt->setText(QApplication::translate("FilterEdgesByWeightDialog", "Filter edges with weight over threshold", Q_NULLPTR));
        belowThresholdBt->setText(QApplication::translate("FilterEdgesByWeightDialog", "Filter edges with weight below threshold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FilterEdgesByWeightDialog: public Ui_FilterEdgesByWeightDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTEREDGESBYWEIGHTDIALOG_H
