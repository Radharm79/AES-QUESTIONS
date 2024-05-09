#include<stdio.h>
int main()
{
    int number;
        while (1) {
        // Input a number
        printf("Enter a number (enter 0 to quit): ");
        scanf("%d", &number);

        // Check if the entered number is zero, positive, or negative
        if (number == 0) {
            printf("The entered number is ZERO.\n");
        } else if (number > 0) {
            printf("The entered number is POSITIVE.\n");
        } else {
            printf("The entered number is NEGATIVE.\n");
        }

        // Check if the user wants to quit
        if (number == 0) {
            printf("Exiting the program...\n");
            break;
        }
    return 0;
}
