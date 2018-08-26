#ifndef MAINDLG_H
#define MAINDLG_H

#include <QtGui/QDialog>
#include <QFrame>
#include <QComboBox>


class MainDlg : public QDialog
{
    Q_OBJECT

public:
    MainDlg(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~MainDlg();

    void createCtrlFrame();
    void createContentFrame();
    void fillColorList(QComboBox *);

public slots:
    void sl_window();
    void sl_windowText();
    void sl_button();
    void sl_buttonText();
    void sl_base();

private:
    QFrame *ctrlFrame;  //��ɫѡ�����
    QFrame *contentFrame;   //������ʾ���
    QComboBox *cbbWindow;
    QComboBox *cbbWindowText;
    QComboBox *cbbButton;
    QComboBox *cbbButtonText;
    QComboBox * cbbBase;

};

#endif // MAINDLG_H
