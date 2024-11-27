#include<stdio.h>
#include <time.h>
#include <stdlib.h>

void init(int *v, unsigned size){
     srand(time(NULL));  

    for(unsigned int i = 0;i<size;i++){
        v[i] = (int)((double)rand()/RAND_MAX*100); 
    }
}


void sort(int *v, unsigned size){
    int n = size;
    int swapped;
    do{
        swapped = 0;
        for (unsigned int i = 1; i < n;i++){
            if( v[i-1] > v[i]){
                int temp = v[i-1];
                v[i-1] = v[i];
                v[i] = temp;
                swapped = 1;
            }
            
        }
    } while(swapped);
return;
} 
int search(int *v, unsigned size, int value){
    for(unsigned int i = 0; i < size;i++){
        if(v[i]==value){
            return i;
        }
        return -1;
    }
}
void show(int *v, unsigned size){
    for(unsigned int i = 0;i < size;i++){
        printf("[%u]%d\n",i,v[i]);
    }

}


int main(int argc, char **argv){
    unsigned size = 200;
    int v[size];
    init( v , size);
    for(unsigned int i = 0; i < size; i++){
        printf("%d\n ", v[i]);
    }
    
} 
