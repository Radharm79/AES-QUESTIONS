#include<stdio.h>
double power(double base, int exponent) 
{
    
    if (exponent == 0)
        return 1;
    
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent);
}
int main()
{
    double base;
    int exponent;
        

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);

    printf("%lf raised to the power of %d = %lf\n", base, exponent, result);
}