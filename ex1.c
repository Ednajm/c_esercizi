#include<stdio.h>

int main() {
    unsigned int n = 117, cols = 5;
    
    for(unsigned int i = 0; i <= n; i++) {
        if (i % cols == 0) {
            printf(" \n");
        }
        printf("%4u ", i);
    }
}