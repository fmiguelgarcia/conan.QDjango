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
#include "QDjangoModel.h"

class TestModel : public QDjangoModel
{
public:
    TestModel(QObject *parent = 0) : QDjangoModel(parent) {}

    // expose foreign key methods so they can be tested
    QObject *foreignKey(const char *name) const
    { return QDjangoModel::foreignKey(name); }
    void setForeignKey(const char *name, QObject *value)
    { QDjangoModel::setForeignKey(name, value); }
};


