#include "mainwindow.h"
#include "ui_mainwindow.h"
#define path_to_userDB "/home/ghostman/Documents/QTRobotSuite/rom_user.sqlite"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginBtn_clicked()
{
    check_password();
}

void MainWindow::check_password()
{
    QFileInfo check_users_db(path_to_userDB);
    bool le_name = ui->lineEditUserName->isModified();
    bool le_pass = ui->lineEditPassword->isModified();
    if( le_name && le_pass )
    {
        QString input_name = ui->lineEditUserName->text();
        QString input_pass = ui->lineEditPassword->text();

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

        if(check_users_db.isFile())
        {
            db.setDatabaseName(path_to_userDB);

            if(!db.open())
            {
                QMessageBox::warning(this,"Failed!","E001: DB Connection မအောင်မြင်ပါ။");
            } else
            {

                QSqlQuery query(db);
                if(query.exec("SELECT name,password FROM users WHERE name =\'"+ input_name +
                          "\' AND password =\'" + input_pass +"\'"))
                {
                    if(query.next())
                    {
                        QMessageBox::information(this,"Success!","DB login အောင်မြင်သည်။");
                        // တခြားဟာတွေဒီမှာလုပ်ပါ။
                    }
                    else
                    {
                        QMessageBox::warning(this,"Error!","E002: အသုံးပြုသူအမည် သို့မဟုတ် လျှို့ဝှက်ကုတ် မှားနေသည်။");

                    }
                }
                else
                {
                    QMessageBox::warning(this,"Error!","E003: users Table မရှိသေးပါ။");
                }
            }
        }
        else
        {
            QMessageBox::warning(this,"Not Existed!","E004: DB ဖိုင်မရှိပါ။");
        }

    }
    else
    {
        QMessageBox::warning(this,"Blank Name!","E001: အမည်နှင့် လျှို့ဝှက်နံပါတ်ထည့်ပါ။");
    }
    clear_and_focus();
}

void MainWindow::clear_and_focus(){
    ui->lineEditUserName->clear();
    ui->lineEditPassword->clear();
    ui->lineEditUserName->setFocus();
}

void MainWindow::on_lineEditUserName_editingFinished()
{
    ui->lineEditPassword->setFocus();
}

void MainWindow::on_lineEditPassword_editingFinished()
{
    ui->centralwidget->setFocus();
}


