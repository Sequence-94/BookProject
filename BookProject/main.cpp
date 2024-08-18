#include <QCoreApplication>
#include "book.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool result = true;
    Book b0;

    result &= (b0.getTitle()=="");
    result &= (b0.getAuthors().size()==0);
    result &= (b0.getIsbn()=="");
    result &= (b0.getPublicationDate()==QDate());

    b0.setTile("Best Book");
    b0.setAuthors({"Auth1","Auth2"});
    b0.setIsbn("EDFH5678");
    b0.setPublicationDate(QDate::currentDate());

    qDebug()<<b0.getTitle();
    qDebug()<<b0.getAuthors();
    qDebug()<<b0.getIsbn();
    qDebug()<<b0.getPublicationDate();

    Book b1("A Good Book",{"Auth1","Auth2","Auth3"},"ABCD1234",QDate::currentDate());





    return a.exec();
}
