/*
 * widget.h
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
/*
 * widget.h
 * Generic Media Player
 * Copyright (c) 2015-1016 Minh Inc
 *
 * This file is part of Mgmp.
 *
 * Mgmp is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Mgmp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Mgmp; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
struct QPaintEvent;
struct QPushButton;
struct QSlider;
struct QLabel;
struct QTimer;
struct QMouseEvent;
struct widget:QWidget{
widget(QWidget* p=0);
~widget();
qint64 bt;
int framecount;
//qint64 audiosamplecount;
bool tweak;
bool video;
bool audio;
bool seekfile;
bool pause;
QSlider *sldr;
QLabel *lbl;
QPushButton *fpb;
QTimer *tmr;
public slots:
void slotclicked(const QString& fn="");
private slots:
void pushframe();
void slotsldrvaluechanged(int);
protected:
void paintEvent(QPaintEvent*);
void mousePressEvent(QMouseEvent*);
void enterEvent(QEvent*);
void leaveEvent(QEvent*);
void mouseDoubleClickEvent(QMouseEvent*);
private:
Q_OBJECT
};
#endif
