// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

static float getArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    return fabs((
        x1 * (y2 - y3) +
        x2 * (y3 - y1) +
        x3 * (y1 - y2)) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float totalArea;
    float ar1;
    float ar2;
    float ar3;

    totalArea = getArea(
        a.getX().toFloat(), a.getY().toFloat(),
        b.getX().toFloat(), b.getY().toFloat(),
        c.getX().toFloat(), c.getY().toFloat());

    ar1 = getArea(
        point.getX().toFloat(), point.getY().toFloat(),
        b.getX().toFloat(), b.getY().toFloat(),
        c.getX().toFloat(), c.getY().toFloat());

    ar2 = getArea(
        a.getX().toFloat(), a.getY().toFloat(),
        point.getX().toFloat(), point.getY().toFloat(),
        c.getX().toFloat(), c.getY().toFloat());

    ar3 = getArea(
        a.getX().toFloat(), a.getY().toFloat(),
        b.getX().toFloat(), b.getY().toFloat(),
        point.getX().toFloat(), point.getY().toFloat());
    return (totalArea == (ar1 + ar2 + ar3));
}
