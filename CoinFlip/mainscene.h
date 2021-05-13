#ifndef MAINSCENCE_H
#define MAINSCENCE_H

#include <QMainWindow>

namespace Ui {
class MainScence;
}

class MainScence : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainScence(QWidget *parent = 0);
    ~MainScence();

private:
    Ui::MainScence *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // MAINSCENCE_H
