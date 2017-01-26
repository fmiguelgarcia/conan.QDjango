/*
 * Copyright (C) 2010-2015 Jeremy Lainé
 * Contact: https://github.com/jlaine/qdjango
 *
 * This file is part of the QDjango Library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#pragma once
#include "TestModel.hpp"
#include "Author.hpp"

class BookWithNullAuthor : public TestModel
{
    Q_OBJECT
    Q_PROPERTY(Author* author READ author WRITE setAuthor)
    Q_PROPERTY(QString title READ title WRITE setTitle)
    Q_CLASSINFO("author", "null=true on_delete=cascade")

public:
    BookWithNullAuthor(QObject *parent = 0);

    Author *author() const;
    void setAuthor(Author *author);

    QString title() const;
    void setTitle(const QString &title);
private:
    QString m_title;
};


