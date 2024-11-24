#include<stdio.h>
void compute_mean_variance(float *rmean, float *rvariance, float *values, unsigned size){
    float sum = 0;
    for(unsigned int i = 0; i < size; i++){
        sum += values[i];

    }
    *rmean = sum / size;
    float variance_sum = 0;
    for(unsigned int i = 0; i < size; i++){
        variance_sum += (values[i] - *rmean) * (values[i] - *rmean);
    }
    *rvariance = variance_sum / size;
}
int main(){
    float values[] = { 2 , 4 ,6 , 1};
    int size =  sizeof(values) / sizeof(values[0]);
    float rmean = values[0];
    float rvariance = values[0];
    compute_mean_variance(&rmean, &rvariance, values, size);
    printf("rmean = %f\n", rmean);
    printf("rvariance = %f\n", rvariance);
}