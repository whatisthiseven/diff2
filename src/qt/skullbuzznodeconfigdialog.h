#ifndef CRAVENODECONFIGDIALOG_H
#define CRAVENODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class CraveNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class CraveNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CraveNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~CraveNodeConfigDialog();

private:
    Ui::CraveNodeConfigDialog *ui;
};

#endif // CRAVENODECONFIGDIALOG_H
