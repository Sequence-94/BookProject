#ifndef BOOKWRITER_H
#define BOOKWRITER_H

#include "book.h"
#include <QString>
#include <QObject>

class BookWriter : public QObject
{
    Q_OBJECT
public:
    explicit BookWriter(QObject *parent = nullptr);
    void saveBook(const Book &book, const QString &fname);

signals:
};

#endif // BOOKWRITER_H
