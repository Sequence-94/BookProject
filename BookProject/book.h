#ifndef BOOK_H
#define BOOK_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QStringList>

class Book : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ getTitle WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QStringList authors READ getAuthors WRITE setAuthors NOTIFY authorsChanged)
    Q_PROPERTY(QString isbn READ getIsbn WRITE setIsbn NOTIFY isbnChanged)
    Q_PROPERTY(QDate publicationDate READ getPublicationDate WRITE setPublicationDate NOTIFY publicationDateChanged)

public:
    //def constructor
    explicit Book(QObject *parent = nullptr);


    //par constructor
    Book(const QString &t,const QStringList &a, const QString &i, const QDate &p);


    //getters
    QString getTitle() const;
    QStringList getAuthors() const;
    QString getIsbn() const;
    QDate getPublicationDate() const;

    //QString obtainBookInfo() const;
    //void saveBook(const Book &b);

public slots:
    void setTitle(const QString &t);
    void setAuthors(const QStringList &a);
    void setIsbn(const QString &i);
    void setPublicationDate(const QDate &p);

signals:
    void titleChanged();
    void authorsChanged();
    void isbnChanged();
    void publicationDateChanged();


private:
    QString m_Title;
    QStringList m_Authors;
    QString m_Isbn;
    QDate m_PublicationDate;


};

#endif // BOOK_H
