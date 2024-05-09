#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length,i,j;
    char temp;

     printf("Enter a string: ");
    gets(str);

    
    length = strlen(str);

       if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

     for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
}