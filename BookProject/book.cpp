#include "book.h"

Book::Book(QObject *parent)
    : QObject{parent}
{}

Book::Book(const QString &t, const QStringList &a, const QString &i, const QDate &p):
    m_Title(t), m_Authors(a), m_Isbn(i), m_PublicationDate(p) {}

void Book::setTitle(const QString &t)
{
    if (m_Title != t){
        m_Title = t;
        emit titleChanged();
    }
}

void Book::setAuthors(const QStringList &a)
{
    if(m_Authors != a){
        m_Authors =a;
        emit titleChanged();
    }
}

void Book::setIsbn(const QString &i)
{
    if(m_Isbn != i){
        m_Isbn =i;
        emit isbnChanged();
    }
}

void Book::setPublicationDate(const QDate &p)
{
    if(m_PublicationDate != p){
        m_PublicationDate = p;
        emit publicationDateChanged();
    }
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


