/********************************************************************************
** Form generated from reading UI file 'randerdosrenyidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDERDOSRENYIDIALOG_H
#define UI_RANDERDOSRENYIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RandErdosRenyiDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nodesLabel;
    QSpinBox *nodesSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *modelLabel;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *gnpRadioButton;
    QRadioButton *gnmRadioButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *edgesSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *probLabel;
    QDoubleSpinBox *probDoubleSpinBox;
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

    void setupUi(QDialog *RandErdosRenyiDialog)
    {
        if (RandErdosRenyiDialog->objectName().isEmpty())
            RandErdosRenyiDialog->setObjectName(QStringLiteral("RandErdosRenyiDialog"));
        RandErdosRenyiDialog->resize(610, 371);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RandErdosRenyiDialog->sizePolicy().hasHeightForWidth());
        RandErdosRenyiDialog->setSizePolicy(sizePolicy);
        RandErdosRenyiDialog->setMinimumSize(QSize(610, 365));
        RandErdosRenyiDialog->setMaximumSize(QSize(650, 400));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        RandErdosRenyiDialog->setFont(font);
        gridLayout = new QGridLayout(RandErdosRenyiDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(RandErdosRenyiDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(560, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nodesLabel = new QLabel(RandErdosRenyiDialog);
        nodesLabel->setObjectName(QStringLiteral("nodesLabel"));
        sizePolicy1.setHeightForWidth(nodesLabel->sizePolicy().hasHeightForWidth());
        nodesLabel->setSizePolicy(sizePolicy1);
        nodesLabel->setMinimumSize(QSize(380, 0));
        nodesLabel->setFont(font1);

        horizontalLayout_2->addWidget(nodesLabel);

        nodesSpinBox = new QSpinBox(RandErdosRenyiDialog);
        nodesSpinBox->setObjectName(QStringLiteral("nodesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nodesSpinBox->sizePolicy().hasHeightForWidth());
        nodesSpinBox->setSizePolicy(sizePolicy2);
        nodesSpinBox->setMinimumSize(QSize(100, 0));
        nodesSpinBox->setFont(font1);
        nodesSpinBox->setMinimum(0);
        nodesSpinBox->setMaximum(9999);
        nodesSpinBox->setValue(100);

        horizontalLayout_2->addWidget(nodesSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        modelLabel = new QLabel(RandErdosRenyiDialog);
        modelLabel->setObjectName(QStringLiteral("modelLabel"));
        sizePolicy1.setHeightForWidth(modelLabel->sizePolicy().hasHeightForWidth());
        modelLabel->setSizePolicy(sizePolicy1);
        modelLabel->setMinimumSize(QSize(380, 0));
        modelLabel->setFont(font1);

        horizontalLayout_5->addWidget(modelLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gnpRadioButton = new QRadioButton(RandErdosRenyiDialog);
        gnpRadioButton->setObjectName(QStringLiteral("gnpRadioButton"));
        gnpRadioButton->setMinimumSize(QSize(100, 0));
        gnpRadioButton->setFont(font1);
        gnpRadioButton->setChecked(true);
        gnpRadioButton->setAutoExclusive(false);

        verticalLayout_3->addWidget(gnpRadioButton);

        gnmRadioButton = new QRadioButton(RandErdosRenyiDialog);
        gnmRadioButton->setObjectName(QStringLiteral("gnmRadioButton"));
        gnmRadioButton->setMinimumSize(QSize(100, 0));
        gnmRadioButton->setFont(font1);
        gnmRadioButton->setAutoExclusive(false);

        verticalLayout_3->addWidget(gnmRadioButton);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(RandErdosRenyiDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(380, 0));
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        edgesSpinBox = new QSpinBox(RandErdosRenyiDialog);
        edgesSpinBox->setObjectName(QStringLiteral("edgesSpinBox"));
        edgesSpinBox->setMinimumSize(QSize(100, 0));
        edgesSpinBox->setFont(font1);
        edgesSpinBox->setMinimum(10);
        edgesSpinBox->setMaximum(9999);

        horizontalLayout_6->addWidget(edgesSpinBox);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        probLabel = new QLabel(RandErdosRenyiDialog);
        probLabel->setObjectName(QStringLiteral("probLabel"));
        sizePolicy1.setHeightForWidth(probLabel->sizePolicy().hasHeightForWidth());
        probLabel->setSizePolicy(sizePolicy1);
        probLabel->setMinimumSize(QSize(380, 0));
        probLabel->setFont(font1);

        horizontalLayout->addWidget(probLabel);

        probDoubleSpinBox = new QDoubleSpinBox(RandErdosRenyiDialog);
        probDoubleSpinBox->setObjectName(QStringLiteral("probDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(probDoubleSpinBox->sizePolicy().hasHeightForWidth());
        probDoubleSpinBox->setSizePolicy(sizePolicy2);
        probDoubleSpinBox->setMinimumSize(QSize(100, 0));
        probDoubleSpinBox->setFont(font1);
        probDoubleSpinBox->setMinimum(0.01);
        probDoubleSpinBox->setMaximum(1);
        probDoubleSpinBox->setSingleStep(0.01);
        probDoubleSpinBox->setValue(0.1);

        horizontalLayout->addWidget(probDoubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(RandErdosRenyiDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(380, 0));
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        undirectedRadioButton = new QRadioButton(RandErdosRenyiDialog);
        undirectedRadioButton->setObjectName(QStringLiteral("undirectedRadioButton"));
        sizePolicy2.setHeightForWidth(undirectedRadioButton->sizePolicy().hasHeightForWidth());
        undirectedRadioButton->setSizePolicy(sizePolicy2);
        undirectedRadioButton->setMinimumSize(QSize(100, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        undirectedRadioButton->setFont(font2);
        undirectedRadioButton->setChecked(true);
        undirectedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(undirectedRadioButton);

        directedRadioButton = new QRadioButton(RandErdosRenyiDialog);
        directedRadioButton->setObjectName(QStringLiteral("directedRadioButton"));
        sizePolicy2.setHeightForWidth(directedRadioButton->sizePolicy().hasHeightForWidth());
        directedRadioButton->setSizePolicy(sizePolicy2);
        directedRadioButton->setMinimumSize(QSize(100, 0));
        directedRadioButton->setFont(font1);
        directedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(directedRadioButton);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(RandErdosRenyiDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(380, 0));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        diagCheckBox = new QCheckBox(RandErdosRenyiDialog);
        diagCheckBox->setObjectName(QStringLiteral("diagCheckBox"));
        sizePolicy2.setHeightForWidth(diagCheckBox->sizePolicy().hasHeightForWidth());
        diagCheckBox->setSizePolicy(sizePolicy2);
        diagCheckBox->setMinimumSize(QSize(100, 0));
        diagCheckBox->setFont(font1);
        diagCheckBox->setChecked(true);

        verticalLayout_2->addWidget(diagCheckBox);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RandErdosRenyiDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);


        retranslateUi(RandErdosRenyiDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RandErdosRenyiDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RandErdosRenyiDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandErdosRenyiDialog);
    } // setupUi

    void retranslateUi(QDialog *RandErdosRenyiDialog)
    {
        RandErdosRenyiDialog->setWindowTitle(QApplication::translate("RandErdosRenyiDialog", "Erd\305\221s\342\200\223R\303\251nyi network generator", Q_NULLPTR));
        label_2->setText(QApplication::translate("RandErdosRenyiDialog", "Generate random network according to Erd\305\221s\342\200\223R\303\251nyi (ER) model.\n"
"In fact, there are two models: in G(n,p) edges are created with Bernoulli trials, \n"
"while in G(n,M) a graph is randomly selected from all graphs with\n"
" n nodes and M edges", Q_NULLPTR));
        nodesLabel->setText(QApplication::translate("RandErdosRenyiDialog", "Nodes", Q_NULLPTR));
        modelLabel->setText(QApplication::translate("RandErdosRenyiDialog", "Model to use", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gnpRadioButton->setToolTip(QApplication::translate("RandErdosRenyiDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This will create a new random network using <span style=\" font-weight:600;\">G(n,p)</span> model, where</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">n</span> is the number of nodes in the final graph</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">p</span> is the probability with which an edge is included in the graph</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you select this model, you must enter the number of nodes n and the edge probability p. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You may also select if the final network will b"
                        "e undirected or directed and if you want to allow nodes to link to themselves (diagonal non zero).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gnpRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "G(n, p)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gnmRadioButton->setToolTip(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>This will create a new random network using <span style=\" font-weight:600;\">G(n,M)</span> model, where</p><p><span style=\" font-weight:600;\"> n</span> is the number of nodes in the final graph</p><p><span style=\" font-weight:600;\"> M</span> is the number of edges in the final graph</p><p>If you select this model, you must enter both the number of nodes n and the number of edges M</p><p>You may also select if the final network will be undirected or directed and if you want to allow nodes to link to themselves (diagonal non zero).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gnmRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "G(n, M)", Q_NULLPTR));
        label_4->setText(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>Edges <span style=\" color:#7c7c7c;\">for G(n,M) model only</span></p></body></html>", Q_NULLPTR));
        probLabel->setText(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>Edge Probability <span style=\" color:#7c7c7c;\">applicable only in G(n,p) model</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("RandErdosRenyiDialog", "Graph Mode", Q_NULLPTR));
        undirectedRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "Undirected", Q_NULLPTR));
        directedRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "Directed", Q_NULLPTR));
        label_3->setText(QApplication::translate("RandErdosRenyiDialog", "Allow diagonals (loops) or set to zero?", Q_NULLPTR));
        diagCheckBox->setText(QApplication::translate("RandErdosRenyiDialog", "Yes, allow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RandErdosRenyiDialog: public Ui_RandErdosRenyiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDERDOSRENYIDIALOG_H
