#include <QApplication>
#include <QLabel>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel lbl;
    lbl.setPixmap(QPixmap("caminhoImagem")); //seguir com um resize
    lbl.show();
    return app.exec();
}
