/**
 * Qt-SslServer, a Tcp Server class with SSL support using QTcpServer and QSslSocket.
 * Copyright (C) 2014  TRUCHOT Guillaume
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef SERVEREXAMPLE_H
#define SERVEREXAMPLE_H

#include <QObject>

class ServerExample : public QObject
{
    Q_OBJECT

public:
    ServerExample(QObject *parent = 0);


public slots:
    void run();
};

#endif // SERVEREXAMPLE_H
