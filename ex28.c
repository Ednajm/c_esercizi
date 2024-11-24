#include<stdio.h>
#define SIZE 1024
void fibonacci(unsigned *dst, unsigned n){
    if(n==0){
           return ; 
        }
        if( n >= 1){
            dst[0] = 0; 
        }
        if(n >=2){
            dst[1] = 1;
        }
    
    for(unsigned int i = 2; i < n ; i++){
       dst[i]=dst[i - 1]+dst[i - 2];

    }
}
int main(){
    int n = 9;
    int size = n;
    unsigned dst[n];
    fibonacci(dst , n );
    printf(" Fibonacci = ");
    for ( unsigned int i = 0; i < size; i++)
    {
        printf("%d",dst[i]);

    } 
}