#include<stdio.h>
struct complex {
    double real;
    double imaginary;
};

void complex_product(struct complex *r, const struct complex *c1, const struct complex *c2){
    r->real = (c1->real * c2->real) - (c1->imaginary * c2->imaginary);
    r-> imaginary = (c1->real * c2->imaginary) + (c1->imaginary * c2->real);
}
int main(){
    struct complex c1 = {2.0, 3.0};  // c1 = 2 + 3i
    struct complex c2 = {4.0, 5.0};  // c2 = 4 + 5i
    struct complex result;

    
    // Compute the product
    complex_product(&result, &c1, &c2);

    // Print the result
    printf("Product: %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}