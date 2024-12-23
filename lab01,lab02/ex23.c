#include<stdio.h>
void rotate(char *dst, const char *src, char shift){
    for( int i = 0 ; src[i] != '\0'; i++){
        dst[i] = src[i] + shift;
        
    }
}
int main(){
    char src[] = {"abcdef"};
    unsigned long size = sizeof(src);
    char dst[size];
    rotate(dst, src, 5);
    printf("rotate = ");
    for ( unsigned long i = 0; i < size; i++)
    {
        printf("%c",dst[i]);

    } 
}