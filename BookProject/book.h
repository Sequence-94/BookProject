#ifndef BOOK_H
#define BOOK_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QStringList>

class Book : public QObject
{
    Q_OBJECT
public:
    //def constructor
    explicit Book(QObject *parent = nullptr);


    //par constructor
    Book(const QString &t,const QStringList &a, const QString &i, const QDate &p);


    //setters
    void setTile(const QString &t);
    void setAuthors(const QStringList &a);
    void setIsbn(const QString &i);
    void setPublicationDate(const QDate &p);

    //getters
    QString getTitle() const;
    QStringList getAuthors() const;
    QString getIsbn() const;
    QDate getPublicationDate() const;

    //QString obtainBookInfo() const;
    //void saveBook(const Book &b);

private:
    QString m_Title;
    QStringList m_Authors;
    QString m_Isbn;
    QDate m_PublicationDate;

signals:
};

#endif // BOOK_H
