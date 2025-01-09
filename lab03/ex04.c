#include <stdio.h>
#include <math.h>

struct array_info {
    int max;
    int min;
    float mean;
    float variance;
};

struct array_info array_stats(const int *values, unsigned size){
    unsigned i;
    int min = values[0];
    int max = values[0];
    float mean = 0.0F;
    float variance = 0.0F;
    int sum = 0;
    for(unsigned int i = 0; i < size; i++){
        if(values[i] < min){
            min = values[i];
        }
        if(values[i] > max){
            max = values[i];
        }
        sum += values[i];
    }
    mean = (float)sum / size;
    for(unsigned int i = 0; i < size; i++){
        variance += (values[i] - mean) * (values[i] - mean);
    }
    variance = variance / size;
    struct array_info result = {max, min, mean, variance};
    return result;
int main(){
    int values[] = {2, 3, 5, 44, 76};
    unsigned size = sizeof(values) / sizeof(values[0]);
    struct array_info stats = array_stats(values, size);
    printf("Max: %d\n", stats.max);
    printf("Min: %d\n", stats.min);
    printf("Mean: %.2f\n", stats.mean);
    printf("Variance: %.2f\n", stats.variance);
    return 0;
}
}