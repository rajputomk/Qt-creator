#include <QApplication>
#include <QLabel>
using namespace std;

int main(int argC, char *argV[]) {
    QApplication app(argC, argV);
    QLabel *label = new QLabel("Hello world");

    label->setWindowTitle("My app");
    label->resize(800, 400);
    label->show();

    return app.exec();
}
