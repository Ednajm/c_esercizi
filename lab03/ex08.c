#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct point {
   float x;
   float y;
} point_t;

typedef struct polygon {
    unsigned n;
    point_t *vertices;
} polygon_t;
float compute_area(const polygon_t *p){
    double area = 0.0;
    for (unsigned i = 0; i < p->n; i++) {
        unsigned next = (i + 1) % p->n;
        area += p->vertices[i].x * p->vertices[next].y - p->vertices[i].y * p->vertices[next].x;
    }
    area = fabs(area) / 2.0;
    return area;
}
int main(){
    polygon_t p;
    p.n = 4;
    p.vertices = (point_t *)malloc(p.n * sizeof(point_t));
    p.vertices[0].x = 0.0;
    p.vertices[0].y = 0.0;
    p.vertices[1].x = 1.0;
    p.vertices[1].y = 0.0;
    p.vertices[2].x = 1.0;
    p.vertices[2].y = 1.0;
    p.vertices[3].x = 0.0;
    p.vertices[3].y = 1.0;
    printf("Area of the polygon: %.2f\n", compute_area(&p));
    free(p.vertices);
    return 0;
}