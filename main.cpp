/*
 * main.cpp
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
#include <QApplication>
#include <stdint.h>
#include "widget.h"
#include "ndebug.h"
//typedef qint64 uint64_t;
//typedef quint8 uint8_t;
//typedef qint16 int16_t;
#include "audiocontext.h"
extern struct audiocontext ac;
int main(int argc, char *argv[]){
QApplication a(argc,argv);
widget w;
w.show();
w.setGeometry(w.x(),w.y(),ac.vwidth,ac.vheight);
if(argc==2)
w.slotclicked(argv[1]);
return a.exec();
}
