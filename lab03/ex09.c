#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

typedef struct point {
    float x;
    float y;
} point_t;

typedef struct circle {
    point_t center;
    float radius;
} circle_t;

int isinside(const point_t *p, const circle_t *c){
    float d1 = p->x - c->center.x;
    float d2 = p->y - c->center.y;
    float distance = hypot(d2, d1);
    if(distance < c->radius){
        return TRUE;
    }else{
        return FALSE;

    }
}

int main(){
    point_t p = {4, 2};
    circle_t c = {{6, 1}, 1};
    if (isinside(&p, &c)){
        printf("The point is inside the circle.\n");
    }else{
        printf("The point is outside the circle.\n");
    }
    return 0;
}
    