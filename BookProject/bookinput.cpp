#include "bookinput.h"
#include <QVBoxLayout>
#include <QFormLayout>

BookInput::BookInput(QWidget *parent)
    : QWidget{parent}
{
    titleEdit = new QLineEdit(this);
    authorsEdit = new QTextEdit(this);
    isbnEdit = new QLineEdit(this);
    dateEdit = new QDateEdit(this);
    dateEdit -> setDisplayFormat("yyyy-MM-dd");
    dateEdit -> setCalendarPopup(true);

    saveButton = new QPushButton("Save Book",this);

    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Title: ", titleEdit);
    formLayout->addRow("Authors: ",authorsEdit);
    formLayout->addRow("ISBN: ",isbnEdit);
    formLayout->addRow("Publication Date: ",dateEdit);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(formLayout);
    mainLayout->addWidget(saveButton);

    setLayout(mainLayout);

    connect(saveButton,&QPushButton::clicked,this,&BookInput::saveBook);
}

void BookInput::saveBook(){
    QString title = titleEdit->text();
    QStringList authors = authorsEdit->toPlainText().split(",",Qt::SkipEmptyParts);
    QString isbn = isbnEdit->text();
    QDate publicationDate = dateEdit->date();

    Book book(title, authors, isbn, publicationDate);
    writer.saveBook(book,"book.txt");

}
