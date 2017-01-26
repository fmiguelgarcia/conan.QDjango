#include "Book.hpp"

Book::Book(QObject *parent)
	: TestModel(parent)
{
	setForeignKey("author", new Author(this));
}

Author *Book::author() const 
{ return qobject_cast<Author*>(foreignKey("author")); }

void Book::setAuthor(Author *author) 
{ setForeignKey("author", author); }

QString Book::title() const 
{ return m_title; }

void Book::setTitle(const QString &title) 
{ m_title = title; }

