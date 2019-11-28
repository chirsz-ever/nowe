#ifndef DATAFRAME_H
#define DATAFRAME_H

#include <QDialog>
#include"ChangeHeaderWnd.h"
#include"dateStructure.h"
namespace Ui {
class DataFrame;
}

class DataFrame : public QDialog
{
    Q_OBJECT

public:
    explicit DataFrame(QWidget *parent = nullptr);
    ~DataFrame();

    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::DataFrame *ui;
    ChangeHeaderWnd ch;
    QPoint last;


public slots:
    void ChangeHeader();
    void windowclosed();
    void windowmin();
    void setInfo(infoDate info);

    void sendInfo();
private slots:
    void on_ok_clicked();
signals:
    void infoChange(infoDate);
    void update();
};

#endif // DATAFRAME_H
                      
