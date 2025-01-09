#include<stdio.h>
#include<stdlib.h>
long matrix_edge(unsigned rows, unsigned cols, int m[][cols]){
    int sum = 0;
    for(unsigned int i = 0; i < rows - 1; i++){
        for(unsigned int j = 0; j < cols - 1; j++){
            if(i == 0 || i == rows -  1 || j == 0 || j == cols - 1){
                sum = sum+m[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int m[4][4] = {
        {2, 4, 6, 7},
        {1, 3, 8, 9},
        {11, 32, 12, 44},
        {5, 10, 13, 37}
    };
    int result = matrix_edge(4, 4, m);
    printf("sum = %d\n", result);
}