#include<stdio.h>
void diagonals(int *rdp, int *rds, unsigned cols, const int m[][cols]){
    int rows = cols;
    unsigned size = cols;
    for(unsigned int i = 0; i < size; i++){
        rdp[i] = m[i][i];
        rds[i] = m[i][size - i - 1];
    }
    return;
}

int main(){
    int m[3][3] = {
        {2,6,7},
        {1,5,8},
        {3,9,10}
    };
    int rdp[3];
    int rds[3];
    diagonals(rdp, rds, 3, m);
    printf("diagonal_principale = ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", rdp[i]);
    }
    printf("\ndiagonal_secondaria = ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", rds[i]);
    }
    printf("\n");
    return 0;
}