#include "Author.hpp"

Author::Author(QObject *parent)
	: TestModel(parent) 
{}

QString Author::name() const 
{ return m_name; }

void Author::setName(const QString &name) 
{ m_name = name; }

