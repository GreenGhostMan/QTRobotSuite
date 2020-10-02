#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QFileInfo>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void clear_and_focus();
private slots:
    void on_loginBtn_clicked();

    void on_lineEditUserName_editingFinished();

    void on_lineEditPassword_editingFinished();


private:
    Ui::MainWindow *ui;
    void check_password();
};
#endif // MAINWINDOW_H
