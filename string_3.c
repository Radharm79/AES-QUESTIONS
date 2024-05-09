#include<stdio.h>
int main()
{
    char str[100];
    int uc=0,lc=0,sc=0,i=0;

    printf("Enter a string: ");
    gets(str);

    // Count uppercase, lowercase, and special characters
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                uc++;
            } else {
                lc++;
            }
        } else {
            sc++;
        }
        i++;
    }

    // Display the counts
    printf("Uppercase characters: %d\n", uc);
    printf("Lowercase characters: %d\n", lc);
    printf("Special characters: %d\n", sc);

}