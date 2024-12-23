#include<stdio.h>
void reversei(int *dst, const int *src, unsigned size){
    for(unsigned int i = 0 ; i < size; i++ ){
        dst[i] = src[size - i  - 1 ];
    }

}
int main(){
    int src[] = { 1 , 2 , 3 , 4 , 5};
    unsigned size = sizeof(src) / sizeof(src[0]);
    int dst[size];
    reversei(dst, src , size);
    printf("reversei = ");
    for ( unsigned i = 0; i < size; i++)
    {
        printf("%d",dst[i]);

    }   
}
