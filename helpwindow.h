#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QtWidgets/QDialog>
// QAbstractButton is likely included by QDialog or ui_helpwindow.h
// #include <QtWidgets/QAbstractButton>

namespace Ui {
class HelpWindow;
}

class HelpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HelpWindow(QWidget *parent = nullptr);
    ~HelpWindow();

private:
    Ui::HelpWindow *ui;
};

#endif // HELPWINDOW_H
