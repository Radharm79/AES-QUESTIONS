#include<stdio.h>
int countDigits(int n) 
{
    if (n < 10)
        return 1;
    else
        return 1 + countDigits(n / 10);
}

int main()
{
    int count,number;
    printf("Enter a number: ");
    scanf("%d", &number);

    count = countDigits(number);

    printf("Number of digits in %d: %d\n", number, count);

}