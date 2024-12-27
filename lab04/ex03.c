#include <stdio.h>
#include <stdlib.h>

void merge(int *dst, const int *a1, unsigned s1, const int *a2, unsigned s2) {
    unsigned i = 0, j = 0, k = 0;

    while (i < s1 && j < s2) {
        if (a1[i] < a2[j]) {
            dst[k++] = a1[i++];
        } else {
            dst[k++] = a2[j++];
        }
    }

    while (i < s1) {
        dst[k++] = a1[i++];
    }

    while (j < s2) {
        dst[k++] = a2[j++];
    }
}

int main(void) {
    int a1[] = {1, 3, 5, 7};
    int a2[] = {2, 4, 6, 8};
    unsigned s1 = sizeof(a1) / sizeof(a1[0]);
    unsigned s2 = sizeof(a2) / sizeof(a2[0]);
    int *dst = malloc((s1 + s2) * sizeof(int));

    if (!dst) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    merge(dst, a1, s1, a2, s2);

    for (unsigned i = 0; i < s1 + s2; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");

    free(dst);
    return 0;
}