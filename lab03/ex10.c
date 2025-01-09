#include<stdio.h>

#define ROWS 3
#define cols 3
void fill_matrix(unsigned rows , unsigned cols , int m[][cols]){
    int i , j , count = 1;
    int size;
    for(unsigned int i = 0; i < rows;i++){
        for(unsigned int j = 0;j < cols;j++){
            m[i][j] = (unsigned int)count++;
        }
    }
}
void show_addresses(int rows, int cols, int m[][cols]){
    unsigned i , j ;
    for(unsigned int i = 0;i < rows;i++){
        for(unsigned int j = 0; j < cols;j++){
            printf("%p ", &m[i][j]);

        }
        printf("\n"); 

    }
}
int main(){
    int m[ROWS][cols];
    fill_matrix(ROWS, cols, m);
    show_addresses(ROWS, cols, m);
    return 0;
} 