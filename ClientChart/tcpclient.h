#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QWidget>
#include <QTcpSocket>    //通信套接字
namespace Ui {
class TcpClient;
}

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    explicit TcpClient(QWidget *parent = nullptr);
    ~TcpClient();

private slots:
    void on_connect_PB_clicked();

    void on_disconnect_PB_clicked();

    void on_clear_PB_clicked();

    void on_Messages_QTE_textChanged();

private:
    Ui::TcpClient *ui;

    QTcpSocket *tcpSocket;   //通信
};

#endif // TCPCLIENT_H
