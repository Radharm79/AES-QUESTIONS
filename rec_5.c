#include<stdio.h>
int sumOfDigits(int n) 
{
    if (n < 10)
        return n;
    else
        return (n % 10) + sumOfDigits(n / 10);
}
int main()
{
    int sum,number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits using recursion
     sum = sumOfDigits(number);

    // Print the sum of digits
    printf("Sum of digits in %d: %d\n", number, sum);

}