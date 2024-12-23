#include<stdio.h>
void trova_minmax(int *rmin, int *rmax, const int *values, unsigned size){
      for(unsigned int i = 0; i < size; i++){
        if(values[i] > *rmax){
            *rmax = values[i];
        }else if(values[i]< *rmin){
            *rmin = values[i];
        }
    }
}
int main(){
    int values[] = {2,5,8,9,23,4,65,124,54};
    int size = sizeof(values) / sizeof(values[0]);
    int rmax = values[0];
    int rmin = values[0];
    trova_minmax(&rmax , &rmin,values , size);
    printf("trova_max = %d\n", rmax);
    printf("trova_min = %d\n", rmin);
    
}