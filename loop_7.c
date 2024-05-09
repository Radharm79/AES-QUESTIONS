#include <stdio.h>
#include <math.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Armstrong numbers from 1 to %d are:\n", N);
    for (int num = 1; num <= N; ++num) {
        int originalNum, remainder, n = 0, result = 0;

        originalNum = num;

        // store the number of digits of num in n
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // result contains sum of nth power of individual digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // if num is equal to result, the number is an Armstrong number
        if (num == result) {
            printf("%d\n", num);
        }
    }

}
