#include<stdio.h>
#include<string.h>
unsigned my_strlen(const char *src){
    unsigned size = 0;
    while (src[size] != '\0') {
        size++;
    }
    return size;
}
int main(void){
    char src[] = "abcdidasnfsaqwe";
    unsigned size = my_strlen(src);
    printf("my_strlen = %u\n", size);
    return 0;
}

