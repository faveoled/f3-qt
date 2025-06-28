#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtCore/QTimer>
#include "f3_launcher.h"
#include "helpwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_buttonCheck_clicked();
    void on_buttonExit_clicked();
    void on_buttonSelectPath_clicked();
    void on_buttonHelp_clicked();
    void on_timerTimeout();
    void on_cuiStatusChanged(f3_launcher_status status);
    void on_cuiError(f3_launcher_error_code errCode);
    void on_buttonMode_clicked();
    void on_buttonSelectDev_clicked();
    void on_optionQuickTest_clicked();
    void on_optionLessMem_clicked();
    void on_optionDestructive_clicked();
    void on_buttonHideResult_clicked();

private:
    Ui::MainWindow *ui;
    f3_launcher cui;
    QTimer timer;
    HelpWindow help;
    bool checking;
    int timerTarget;
    int userMode;
    QString mountPoint;

    void showStatus(const QString& string);
    void clearStatus();
    void showProgress(int progress10K);
    void showCapacity(int value);
    void showProgressPage(bool visible);
    void showResultPage(bool visible);
    QString mountDisk(const QString& device);
    bool unmountDisk(const QString& mountPoint);
    bool sureToExit(bool manualClose);
    void promptFix();

protected:
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
