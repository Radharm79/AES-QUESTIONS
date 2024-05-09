#include<stdio.h>
#include<stdlib.h>
void fibonacci(int n, int a, int b) 
{
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}
int main()
{
    int n;
    printf("Enter number...");
    scanf("%d",&n);
    if (n <= 0) 
    {
        printf("Number of terms should be positive.\n");
        exit(0);
    }

    
    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n, 0, 1);
}