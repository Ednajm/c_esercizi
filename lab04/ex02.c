#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *reverses(const char *src){
    unsigned i, size;
    char *dst;
    size = strlen(src);
    dst = malloc((size + 1) * sizeof(*dst));
    if (!dst) return NULL;

    for (i = 0; i < size; i++) {
        dst[i] = src[size - 1 - i];
    }
    dst[size] = '\0';
    return dst;
}

#define SIZE 9

int main() {
    char src[] = "abcdefgh";
    char *dst;
    int i;

    dst = reverses(src);

    for (i = 0; i < SIZE; i++) {
        printf("%c ", dst[i]);;
    }

    free(dst);
    return 0;
}