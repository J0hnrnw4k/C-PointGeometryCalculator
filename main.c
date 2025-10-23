#include <stdio.h>
#include "point.h"

int main() {
    Point A, B, mid;
    double dist;

    printf("Enter coordinates of point A (x y z): ");
    scanf("%lf %lf %lf", &A.x, &A.y, &A.z);

    printf("Enter coordinates of point B (x y z): ");
    scanf("%lf %lf %lf", &B.x, &B.y, &B.z);

    midpoint(A, B, &mid);
    distance(A, B, &dist);

    printf("midpoint: %.2lf, %.2lf, %.2lf\n", mid.x, mid.y, mid.z);
    printf("distance: %.2lf\n", dist);

    return 0;
}
