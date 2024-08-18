#ifndef BOOKINPUT_H
#define BOOKINPUT_H
#include "book.h"
#include "bookwriter.h"
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QDateEdit>

class BookInput : public QWidget
{
    Q_OBJECT
public:
    explicit BookInput(QWidget *parent = nullptr);

private:
    QLineEdit *titleEdit;
    QTextEdit *authorsEdit;
    QLineEdit *isbnEdit;
    QDateEdit *dateEdit;
    QPushButton *saveButton;

    BookWriter writer;

private slots:
    void saveBook();

signals:
};

#endif // BOOKINPUT_H
