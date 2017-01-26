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
#include <QObject>

/** Test QDjangoModel class.
 */
class tst_QDjangoModel : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void init();
    void deleteCascade();
    void foreignKey();
    void foreignKey_null();
    void setForeignKey();
    void filterRelated();
    void filterRelatedReverse();
    void filterRelatedReverse_null();
    void primaryKey();
    void selectRelated();
    void selectRelated_null();
    void toString();
    void cleanup();
    void cleanupTestCase();
};


