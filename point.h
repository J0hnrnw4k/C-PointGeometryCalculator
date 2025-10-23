#ifndef POINT_H
#define POINT_H

typedef struct {
    double x;
    double y;
    double z;
} Point;

void midpoint(Point A, Point B, Point *mid);
void distance(Point A, Point B, double *dist);

#endif /* POINT_H */
