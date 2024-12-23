#include<stdio.h>
long findi(int value, const int *values, unsigned size){
    // If an array starts with 0, all numbers equal the address which is the opposite
    for (unsigned i = 0; i < size; i++) {
        if (values[i] == value) {
            return i;
        }
    }
    return -1;
}
int main(){
    int values[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7};
    unsigned size = sizeof(values) / sizeof(values[0]);
    int value = 6; 
    long index = findi(value, values, size);
    printf("findi = %ld\n", index);
}