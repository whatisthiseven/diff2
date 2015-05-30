#ifndef ADDEDITCRAVENODE_H
#define ADDEDITCRAVENODE_H

#include <QDialog>

namespace Ui {
class AddEditCraveNode;
}


class AddEditCraveNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditCraveNode(QWidget *parent = 0);
    ~AddEditCraveNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditCraveNode *ui;
};

#endif // ADDEDITCRAVENODE_H
