#include "bookwriter.h"
#include  <QFile>
#include  <QTextStream>
#include  <QDebug>


void BookWriter::saveBook(const Book &book, const QString &fname)
{
    QFile file(fname);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        out << "Title: "<<book.getTitle()<<Qt::endl;
        out << "Authors: "<<book.getAuthors().join(", ")<<Qt::endl;
        out << "ISBN: "<<book.getIsbn()<<Qt::endl;
        out << "Publication Date: "<<book.getPublicationDate().toString("yyyy-MM-dd")<<Qt::endl;
        file.close();
        qDebug()<<"Book saved to"<<fname;
    }else
    {
        qDebug()<<"Could not open file"<<fname<<"for writing.";
    }
}
