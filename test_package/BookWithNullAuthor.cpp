#include "BookWithNullAuthor.hpp"

BookWithNullAuthor::BookWithNullAuthor(QObject *parent) 
	: TestModel(parent) {}

Author *BookWithNullAuthor::author() const 
{ return qobject_cast<Author*>(foreignKey("author")); }

void BookWithNullAuthor::setAuthor(Author *author) 
{ setForeignKey("author", author); }

QString BookWithNullAuthor::title() const 
{ return m_title; }

void BookWithNullAuthor::setTitle(const QString &title) 
{ m_title = title; }

