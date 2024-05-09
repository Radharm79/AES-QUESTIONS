#include <stdio.h>

int main() {
    int weekday;

    // Input weekday number
    printf("Enter weekday number (1 to 7): ");
    scanf("%d", &weekday);

    // Using switch statement to print weekday name
    switch (weekday)
    {
    case 1:
        printf("\nSunday\n");
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;

    default:
        break;
    }
 

    return 0;
}
