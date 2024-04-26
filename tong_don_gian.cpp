#include <stdio.h>
#include <math.h>

typedef struct Point {
    double x;
    double y;
} Point;

double dist(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2;
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("%.4lf\n", dist(p1, p2));

    return 0;
}