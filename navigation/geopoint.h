/*
 * Copyright (C) 2018 Yaroslav Pronin <proninyaroslav@mail.ru>
 *
 * This file is part of Navigation.
 *
 * Navigation is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LibreTorrent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LibreTorrent.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GEOPOINT_H
#define GEOPOINT_H

#include <QObject>
#include <QGeoCoordinate>

class GeoPoint
{
	Q_GADGET

	Q_PROPERTY(long id MEMBER id)
	Q_PROPERTY(QGeoCoordinate coords MEMBER coords)
public:
	GeoPoint();
	GeoPoint(long id, QGeoCoordinate coords);
	long id;
	QGeoCoordinate coords;
};

#endif // GEOPOINT_H
