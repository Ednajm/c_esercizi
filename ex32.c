#include<stdio.h>
#include<string.h>
void my_strcpy(char *dst, const char *src){
    int size = strlen(src);
    for (unsigned i = 0; i < size ; i++){
        dst[i] = src[i];
    }
    dst[size] = '\0';
}
int main(void){
    char src[] = {"Elhoussine najim"};
    int size = sizeof(src) / sizeof(src[0]);
    char dst[size];
    my_strcpy(dst, src);
    printf("my_strcpy = %s\n", dst);
}