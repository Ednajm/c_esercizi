#include <stdio.h>
void reverses(char *dst, const char *src){
    unsigned long size = 0;

    unsigned long i = 0;
    while (src[i] != '\0')
    {
        size += 1;
        i++;
    }

    for (unsigned long i = 0; i < size; i++)
    {
        dst[i] = src[size - i - 1];
    }
}
int main(){
    char src[] = "abcdef";
    unsigned long size = sizeof(src) / sizeof(src[0]);
    char dst[size];
    reverses(dst , src);
    printf("reversei = ");
      for ( unsigned long i = 0; i < size; i++)
    {
        printf("%c",dst[i]);

    } 
}
