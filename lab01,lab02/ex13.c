#include<stdio.h>
int main() {
    unsigned N = 10;
    double somma_reverse =0.00;
    for (int i = 1 ; i<=N ; i++) {
        somma_reverse += 1 / (double)i;
    }
    printf("somma_reverse = %lf\n", somma_reverse);
    return 0;
}