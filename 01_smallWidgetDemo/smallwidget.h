#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>

class SmallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SmallWidget(QWidget *parent = nullptr);
    void setNum(int num);
    int getNum();

signals:

public slots:
};

#endif // SMALLWIDGET_H
