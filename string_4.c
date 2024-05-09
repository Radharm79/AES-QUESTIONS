#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the ASCII difference
            str[i] = str[i] - 32;
        }
        i++;
    }

    
    printf("Uppercase string: %s", str);

    
    i = 0;

    
    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding the ASCII difference
            str[i] = str[i] + 32;
        }
        i++;
    }

    
    printf("Lowercase string: %s", str);

}