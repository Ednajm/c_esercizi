#include <stdio.h>
#include <math.h>
int main() {
    int x1 = 2,y1 = 4;
    int x2 = 6,y2 = 9;
    float distance;
    distance = sqrtf((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    printf("p1 =(%d,%d),p2 =(%d,%d) distance = %f\n ",x1,x2,y1,y2,distance);
    distance = sqrtf(pow((x1 -x2),2) + pow((y1 - y2),2));
    printf("p1 =(%d,%d),p2 =(%d,%d) distance = %f\n ",x1,x2,y1,y2,distance);
    distance = hypotf(x1 - x2,y1 - y2);
    printf("p1 =(%d,%d),p2 =(%d,%d) distance = %f\n ",x1,x2,y1,y2,distance);
}