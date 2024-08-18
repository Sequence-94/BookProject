#include "book.h"

Book::Book(QObject *parent)
    : QObject{parent}
{}

Book::Book(const QString &t, const QStringList &a, const QString &i, const QDate &p):
    m_Title(t), m_Authors(a), m_Isbn(i), m_PublicationDate(p) {}

void Book::setTile(const QString &t)
{
    m_Title = t;
}

void Book::setAuthors(const QStringList &a)
{
    m_Authors = a;
}

void Book::setIsbn(const QString &i)
{
    m_Isbn = i;
}

void Book::setPublicationDate(const QDate &p)
{
    m_PublicationDate = p;
}

QString Book::getTitle() const
{
    return m_Title;
}

QStringList Book::getAuthors() const
{
    return  m_Authors;
}

QString Book::getIsbn() const
{
    return m_Isbn;
}

QDate Book::getPublicationDate() const
{
    return m_PublicationDate;
}


