#include "combodelegate.h"
#include <QComboBox>
#include <QCompleter>
#include <QLineEdit>

ComboDelegate::ComboDelegate(QObject *parent) 
    : QItemDelegate(parent)
{

}

QWidget *ComboDelegate::createEditor(QWidget *parent,const QStyleOptionViewItem &/*option*/,const QModelIndex & index) const
{
    QComboBox *editor = new QComboBox(parent);
    editor->addItem(QString::fromLocal8Bit("����"));
    editor->addItem(QString::fromLocal8Bit("��1"));
    editor->addItem(QString::fromLocal8Bit("��2"));
    editor->addItem(QString::fromLocal8Bit("ũ��"));
    editor->addItem(QString::fromLocal8Bit("ҽ��"));
    editor->addItem(QString::fromLocal8Bit("��ʦ"));
    editor->addItem(QString::fromLocal8Bit("����"));
    if (index.data().isValid() && "" != index.data().toString())
    {
        editor->addItem(index.data().toString());
    }
    editor->setEditable(true);
    // �����Զ���ȫ����
    QCompleter *pCompleter = new QCompleter(editor);
    pCompleter->setModel(editor->model());
    pCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    editor->setCompleter(pCompleter);

    // editor->lineEdit()->setReadOnly(true);
    editor->installEventFilter(const_cast<ComboDelegate*>(this));
    return editor;
}

void ComboDelegate::setEditorData(QWidget *editor,const QModelIndex &index) const
{
    QString str = index.model()->data(index).toString();

    QComboBox *box = static_cast<QComboBox*>(editor);
    box->lineEdit()->setText(str);
    //    int currentIndex = box->findText(str);
    //    box->setCurrentIndex(currentIndex);
}

void ComboDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *box = static_cast<QComboBox*>(editor);
    QString str = box->currentText();
    model->setData(index,str);
}

void ComboDelegate::updateEditorGeometry(QWidget *editor,const QStyleOptionViewItem &option, const QModelIndex &/*index*/) const
{
    editor->setGeometry(option.rect);
}
