/*
 * ndebug.h
 * Minh Media Player
 * Copyright (c) 2015-2016 Minh Inc www.minhinc.com
 *
 * This file is part of MMP.
 *
 * MMP is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * MMP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Mgmp; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#ifndef NDEBUG_H
#define NDEBUG_H
#include <QDebug>
#ifndef NNODEBUG
#define trace(arg) qDebug()<<arg;
#else
#define trace(arg);
#endif
#endif
