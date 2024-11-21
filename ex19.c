#include <stdio.h>

int main() {
    unsigned int n = 100;  
    int binary[32];        
    int i = 0;             

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
        
    }
    int count = 0;
    for (int j = 0; j < i; j++) {
        if (binary[j] == 1) {
            count++;
        }
    }
    printf("\nNumber of 1s: %d\n", count);
    return 0;
}