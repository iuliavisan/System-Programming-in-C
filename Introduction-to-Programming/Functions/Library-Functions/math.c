#include <stdio.h>
#include <math.h>

int main(){
    float x,z;
    int y;
    
    printf("Enter values for x, y, z: ");
    scanf("%f %d %f", &x, &y, &z);

    printf("Square root of %.2f is: %.2f\n", x, sqrt(x));
    printf("Exponential function of E is: %.2f\n", exp(x));
    printf("Natural log of %.2f is: %.2f\n", x, log(x));
    printf("Logarithm of %.2f base 10 is: %.2f\n", x, log10(x));
    printf("Absolute value of %.2f is: %.2f\n", x, fabs(x));
    printf("Rounding up of %.2f is: %.2f\n", x, ceil(x));
    printf("Rounding down of %.2f is %.2f\n", x, floor(x));
    printf("%.2f raised to the power of %d is: %.2f\n", x, y, pow(x, y));
    printf("Remainer of %.2f/%.2f is: %.2f\n", x, z, fmod(x,z));
    printf("Sine of %.2f is: %.2f\n", x, sin(x));
    printf("Cosine of %.2f is: %.2f\n",x, cos(x));
    printf("Tangent of %.2f is: %.2f\n", x,tan(x));


    
    return 0;
}
