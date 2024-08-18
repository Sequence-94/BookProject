#include <QCoreApplication>
#include "book.h"
#include "bookwriter.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Book b1("A Good Book",{"Auth1","Auth2","Auth3"},"ABCD1234",QDate::currentDate());

    BookWriter writer;
    QString fn = "test.txt";
    writer.saveBook(b1,fn);





    return a.exec();
}
