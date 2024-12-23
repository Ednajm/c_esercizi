#include <stdio.h>

int main() {
    int n1 = 3 , n2 = 5, n3 = 1;
    int max;
    if ( (n1 >=n2) && (n1 >=n3)) {
        max = n1;
    } else if ((n2 >= n1) && (n2 >= n3)) {
       max = n2;
    } else  {
        max = n3;
    }

    printf("max = %d\n", max);


}
