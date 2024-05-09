#include<stdio.h>
int main()
{
    char str[100],ch;
    int count=0,i=0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find occurrence: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    
    printf("Occurrence of '%c' in the string: %d\n", ch, count);

}