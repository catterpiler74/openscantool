/*
 *  OpenScanTool
 *  Copyright (C) 2012  Alec Hussey
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QtGui>
#include <ObdThread.h>
#include "gauges.h"

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = 0);

protected slots:
	void response(QString pid, QString val, int set, double time); 

private:
	ObdThread *obd;
	Speedometer *speedo;
	Tachometer *tacho;
	QGridLayout *mainLayout;
};

#endif // DASHBOARD_H
