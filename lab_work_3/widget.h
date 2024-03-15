#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

protected:
    QPushButton *exitButton;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};

#endif // WIDGET_H
