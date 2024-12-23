#include<stdio.h>
#include<math.h>
int main() {
    unsigned int N = 100;
    for (int i = 1; i <= N; i++) {
        if(N % i == 0) {
            printf("%d divisioni in %d\n", i , N);
        }
    }

}
