##
 # mgmp.pro
 # Generic Media Player
 # Copyright (c) 2015-1016 Minh Inc
 #
 # This file is part of Mgmp.
 #
 # Mgmp is free software; you can redistribute it and/or
 # modify it under the terms of the GNU Lesser General Public
 # License as published by the Free Software Foundation; either
 # version 2.1 of the License, or (at your option) any later version.
 #
 # Mgmp is distributed in the hope that it will be useful,
 # but WITHOUT ANY WARRANTY; without even the implied warranty of
 # MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 # Lesser General Public License for more details.
 #
 # You should have received a copy of the GNU Lesser General Public
 # License along with Mgmp; if not, write to the Free Software
 # Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
##
QT += core widgets
TARGET = gmp
TEMPLATE = app
DEFINES += NNODEBUG
INCLUDEPATH += c:/work/ffmpeg1/include
LIBS += -Lc:\work\ffmpeg1\lib -lavformat -lavcodec -lavutil -lswscale -lswresample -lavfilter -lavdevice
INCLUDEPATH += c:\temp\qtbuild\sdl\SDL2-2.0.4\i686-w64-mingw32\include\SDL2
LIBS += -L c:\temp\qtbuild\sdl\SDL2-2.0.4\i686-w64-mingw32\lib -lSDL2main -lSDL2 -mwindows -lm -ldinput8 -ldxguid -ldxerr8 -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lversion -luuid
SOURCES += dd.c widget.cpp main.cpp
HEADERS += audiocontext.h widget.h ndebug.h
RESOURCES+=resource.qrc
RC_FILE=myapp.rc
#CONFIG+=console
