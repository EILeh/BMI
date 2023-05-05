#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_countButton_clicked();

    void on_weightLineEdit_textChanged(const QString &weight);

    void on_heightLineEdit_textChanged(const QString &height);


private:
    Ui::MainWindow *ui;

    QString Weight_;

    QString Height_;

    float weight_ = 0;
    float height_ = 0;
};
#endif // MAINWINDOW_HH
