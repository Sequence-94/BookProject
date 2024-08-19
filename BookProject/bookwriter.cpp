#include "bookwriter.h"
#include  <QFile>
#include  <QTextStream>
#include <QMetaProperty>
#include  <QDebug>


BookWriter::BookWriter(QObject *parent)
    :QObject(parent)
{
}

void BookWriter::saveBook(const Book &book, const QString &fname)
{
    QFile file(fname);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        const QMetaObject *metaObject=book.metaObject();

        for (int i=0;i<metaObject->propertyCount();i++){
            QMetaProperty property = metaObject->property(i);
            QString propName = QString(property.name());
            QVariant propValue = property.read(&book);

            out<<propName<<": "<<propValue.toString()<<Qt::endl;
        }

        /*out << "Title: "<<book.getTitle()<<Qt::endl;
        out << "Authors: "<<book.getAuthors().join(", ")<<Qt::endl;
        out << "ISBN: "<<book.getIsbn()<<Qt::endl;
        out << "Publication Date: "<<book.getPublicationDate().toString("yyyy-MM-dd")<<Qt::endl;
        out << "----------------------------------"<<Qt::endl;*/

        file.close();
        qDebug()<<"Book saved"<<fname;
    }else
    {
        qDebug()<<"Could not open file->>"<<fname<<"<<-for writing.";
    }
}
