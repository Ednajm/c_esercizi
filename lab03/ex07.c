#include<stdio.h>
#include<math.h>  // Include math.h for sqrt function

typedef struct point {
   float x;
   float y;
} point_t;

float compute_length(const point_t *p, unsigned n){
    float length = 0.0;
    for(unsigned int i = 0; i < n - 1; i++){
        float dx = p[i+1].x - p[i].x;
        float dy = p[i+1].y - p[i].y;
        length += sqrt(dx * dx + dy * dy);  // Add square root to get the actual distance
    }
    return length;
} 

int main(){
    point_t points[] = {{1, 2}, {3, 4}};  // Example points
    unsigned n = sizeof(points) / sizeof(points[0]);
    float length = compute_length(points, n);
    printf("Lunghezza di una linea spezzata = %f \n", length);
    return 0;
}
