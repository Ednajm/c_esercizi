#include<stdio.h>
void diagonals(int *rdp, int *rds, unsigned cols, const int m[][cols]){
    int rows = cols;
    *rdp = 0;
    *rds = 0;

    for(unsigned int i = 0; i < rows; i++){
        *rdp += m[i][i];           
        *rds += m[i][cols - 1 - i]; 
    }
}
int main (){
    int m[3][3]= {
        {1 , 3 , 4},
        {23 , 3 , 6},
        {19 , 40 , 7},
    };
    int rdp;
    int rds;
    diagonals(&rdp, &rds, 3, m);
    printf("%d\n", rdp);
    printf("%d\n", rds);
}