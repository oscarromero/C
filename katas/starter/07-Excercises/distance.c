#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} Point;

double distance (Point p1, Point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main (int argc, char** argv) {
  Point p1 = {0.5, 1.5};
  Point p2 = {4.5, 4.5};

  printf("Distance = %f\n", distance(p1, p2));

  return 0;
}