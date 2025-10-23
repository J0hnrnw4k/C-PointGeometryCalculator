#include "point.h"
#include <math.h>

void midpoint(Point A, Point B, Point *mid) {
    mid->x = (A.x + B.x) / 2;
    mid->y = (A.y + B.y) / 2;
    mid->z = (A.z + B.z) / 2;
}

void distance(Point A, Point B, double *dist) {
    *dist = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2) + pow(B.z - A.z, 2));
}
