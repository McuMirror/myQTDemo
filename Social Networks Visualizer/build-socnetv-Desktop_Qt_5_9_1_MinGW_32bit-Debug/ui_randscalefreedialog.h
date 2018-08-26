/********************************************************************************
** Form generated from reading UI file 'randscalefreedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDSCALEFREEDIALOG_H
#define UI_RANDSCALEFREEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RandScaleFreeDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nodesLabel;
    QSpinBox *nodesSpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpinBox *powerSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *initialNodesSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *edgesPerStepSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *zeroAppealSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *undirectedRadioButton;
    QRadioButton *directedRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *diagCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RandScaleFreeDialog)
    {
        if (RandScaleFreeDialog->objectName().isEmpty())
            RandScaleFreeDialog->setObjectName(QStringLiteral("RandScaleFreeDialog"));
        RandScaleFreeDialog->resize(528, 427);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RandScaleFreeDialog->sizePolicy().hasHeightForWidth());
        RandScaleFreeDialog->setSizePolicy(sizePolicy);
        RandScaleFreeDialog->setMinimumSize(QSize(528, 350));
        RandScaleFreeDialog->setMaximumSize(QSize(550, 450));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        RandScaleFreeDialog->setFont(font);
        gridLayout = new QGridLayout(RandScaleFreeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(RandScaleFreeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(450, 50));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nodesLabel = new QLabel(RandScaleFreeDialog);
        nodesLabel->setObjectName(QStringLiteral("nodesLabel"));
        sizePolicy1.setHeightForWidth(nodesLabel->sizePolicy().hasHeightForWidth());
        nodesLabel->setSizePolicy(sizePolicy1);
        nodesLabel->setMinimumSize(QSize(380, 0));
        QFont font2;
        font2.setPointSize(11);
        nodesLabel->setFont(font2);

        horizontalLayout_2->addWidget(nodesLabel);

        nodesSpinBox = new QSpinBox(RandScaleFreeDialog);
        nodesSpinBox->setObjectName(QStringLiteral("nodesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nodesSpinBox->sizePolicy().hasHeightForWidth());
        nodesSpinBox->setSizePolicy(sizePolicy2);
        nodesSpinBox->setMinimumSize(QSize(100, 0));
        nodesSpinBox->setFont(font2);
        nodesSpinBox->setMinimum(4);
        nodesSpinBox->setMaximum(9999);
        nodesSpinBox->setValue(100);

        horizontalLayout_2->addWidget(nodesSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        label_7 = new QLabel(RandScaleFreeDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(380, 0));
        label_7->setFont(font2);

        horizontalLayout_9->addWidget(label_7);

        powerSpinBox = new QSpinBox(RandScaleFreeDialog);
        powerSpinBox->setObjectName(QStringLiteral("powerSpinBox"));
        powerSpinBox->setMinimumSize(QSize(100, 0));
        powerSpinBox->setFont(font2);
        powerSpinBox->setMinimum(1);
        powerSpinBox->setMaximum(9999);
        powerSpinBox->setSingleStep(1);
        powerSpinBox->setValue(1);

        horizontalLayout_9->addWidget(powerSpinBox);


        gridLayout->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(RandScaleFreeDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(380, 0));
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4);

        initialNodesSpinBox = new QSpinBox(RandScaleFreeDialog);
        initialNodesSpinBox->setObjectName(QStringLiteral("initialNodesSpinBox"));
        initialNodesSpinBox->setMinimumSize(QSize(100, 0));
        initialNodesSpinBox->setFont(font2);
        initialNodesSpinBox->setMinimum(1);
        initialNodesSpinBox->setMaximum(9999);
        initialNodesSpinBox->setSingleStep(1);
        initialNodesSpinBox->setValue(1);

        horizontalLayout_6->addWidget(initialNodesSpinBox);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        label_5 = new QLabel(RandScaleFreeDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(380, 0));
        label_5->setFont(font2);

        horizontalLayout_7->addWidget(label_5);

        edgesPerStepSpinBox = new QSpinBox(RandScaleFreeDialog);
        edgesPerStepSpinBox->setObjectName(QStringLiteral("edgesPerStepSpinBox"));
        edgesPerStepSpinBox->setMinimumSize(QSize(100, 0));
        edgesPerStepSpinBox->setFont(font2);
        edgesPerStepSpinBox->setMinimum(1);
        edgesPerStepSpinBox->setMaximum(9999);
        edgesPerStepSpinBox->setSingleStep(1);
        edgesPerStepSpinBox->setValue(2);

        horizontalLayout_7->addWidget(edgesPerStepSpinBox);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMinimumSize);
        label_6 = new QLabel(RandScaleFreeDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(380, 0));
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);

        zeroAppealSpinBox = new QSpinBox(RandScaleFreeDialog);
        zeroAppealSpinBox->setObjectName(QStringLiteral("zeroAppealSpinBox"));
        zeroAppealSpinBox->setMinimumSize(QSize(100, 0));
        zeroAppealSpinBox->setFont(font2);
        zeroAppealSpinBox->setMinimum(0);
        zeroAppealSpinBox->setMaximum(9999);
        zeroAppealSpinBox->setSingleStep(1);
        zeroAppealSpinBox->setValue(1);

        horizontalLayout_8->addWidget(zeroAppealSpinBox);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(RandScaleFreeDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(400, 0));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);

        horizontalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        undirectedRadioButton = new QRadioButton(RandScaleFreeDialog);
        undirectedRadioButton->setObjectName(QStringLiteral("undirectedRadioButton"));
        sizePolicy2.setHeightForWidth(undirectedRadioButton->sizePolicy().hasHeightForWidth());
        undirectedRadioButton->setSizePolicy(sizePolicy2);
        undirectedRadioButton->setMinimumSize(QSize(100, 0));
        QFont font4;
        font4.setPointSize(11);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        undirectedRadioButton->setFont(font4);
        undirectedRadioButton->setChecked(true);
        undirectedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(undirectedRadioButton);

        directedRadioButton = new QRadioButton(RandScaleFreeDialog);
        directedRadioButton->setObjectName(QStringLiteral("directedRadioButton"));
        sizePolicy2.setHeightForWidth(directedRadioButton->sizePolicy().hasHeightForWidth());
        directedRadioButton->setSizePolicy(sizePolicy2);
        directedRadioButton->setMinimumSize(QSize(100, 0));
        directedRadioButton->setFont(font2);
        directedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(directedRadioButton);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(RandScaleFreeDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(400, 0));
        label_3->setFont(font2);

        horizontalLayout_4->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        diagCheckBox = new QCheckBox(RandScaleFreeDialog);
        diagCheckBox->setObjectName(QStringLiteral("diagCheckBox"));
        sizePolicy2.setHeightForWidth(diagCheckBox->sizePolicy().hasHeightForWidth());
        diagCheckBox->setSizePolicy(sizePolicy2);
        diagCheckBox->setMinimumSize(QSize(100, 0));
        diagCheckBox->setFont(font2);
        diagCheckBox->setChecked(false);

        verticalLayout_2->addWidget(diagCheckBox);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RandScaleFreeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 1);


        retranslateUi(RandScaleFreeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RandScaleFreeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RandScaleFreeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandScaleFreeDialog);
    } // setupUi

    void retranslateUi(QDialog *RandScaleFreeDialog)
    {
        RandScaleFreeDialog->setWindowTitle(QApplication::translate("RandScaleFreeDialog", "Scale-free random network generator", Q_NULLPTR));
        label_2->setText(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>Generate a random scale-free network of <span style=\" font-style:italic;\">n</span> nodes according to the Barab\303\241si\342\200\223Albert (BA) model which uses a preferential attachment mechanism. The model starts with <span style=\" font-style:italic;\">m</span><span style=\" font-style:italic; vertical-align:sub;\">0</span> connected nodes. In each step a new node is added, along with <span style=\" font-style:italic;\">m</span> edges to existing nodes. Read more in the manual.</p></body></html>", Q_NULLPTR));
        nodesLabel->setText(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>Nodes <span style=\" font-style:italic;\">n</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        nodesSpinBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>The amount of nodes in the resulting scale-free graph</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("RandScaleFreeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Power of preferential attachment <span style=\" font-style:italic;\">p </span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        powerSpinBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>The power p of preferential attachment </p><p>Leave 1 for linear preferential attachment (BA model).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("RandScaleFreeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Initial connected nodes <span style=\" font-style:italic;\">m</span><span style=\" font-style:italic; vertical-align:sub;\">0</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        initialNodesSpinBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>The number m<span style=\" vertical-align:sub;\">0</span> of nodes in the initial connected network.</p><p>Leave 1 to start with just one node.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("RandScaleFreeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Edges to add in each step <span style=\" font-style:italic;\">m</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        edgesPerStepSpinBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>Tthe number of edges to add in each step</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("RandScaleFreeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Zero appeal <span style=\" font-style:italic;\">\316\261</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        zeroAppealSpinBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "<html><head/><body><p>The initial attractiveness of a node - useful for isolate nodes with d =0</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("RandScaleFreeDialog", "Graph Mode", Q_NULLPTR));
        undirectedRadioButton->setText(QApplication::translate("RandScaleFreeDialog", "Undirected", Q_NULLPTR));
        directedRadioButton->setText(QApplication::translate("RandScaleFreeDialog", "Directed", Q_NULLPTR));
        label_3->setText(QApplication::translate("RandScaleFreeDialog", "Allow diagonals (loops) or set to zero?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        diagCheckBox->setToolTip(QApplication::translate("RandScaleFreeDialog", "Check to allow loops (nodes linking to themselves) in the new network", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        diagCheckBox->setText(QApplication::translate("RandScaleFreeDialog", "No loops", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RandScaleFreeDialog: public Ui_RandScaleFreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDSCALEFREEDIALOG_H
