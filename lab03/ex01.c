#include<stdio.h>
#include<stdlib.h>
long matrix_edge(unsigned rows, unsigned cols, int m[][cols]){
    long sum = 0;
    for(unsigned int j = 0; j < cols; j++){
        sum += m[0][j] + m[rows - 1][j];
    }
    for(unsigned int i = 1; i < rows - 1; i++){
        sum += m[i][0] + m[i][cols - 1];
    }
    return sum;
}
int main(void){
  int m[4][4] = {
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9,  10, 11, 12},
            {13, 14, 15, 16},
    };
    printf("matrix edge sum = %ld\n", matrix_edge(4 ,4 , m));
    return 0;

}