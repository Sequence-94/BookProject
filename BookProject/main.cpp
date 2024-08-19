#include <QApplication>
#include "book.h"
#include "bookwriter.h"
#include "bookinput.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    BookInput BookInput;
    BookInput.show();

    return a.exec();
}
