#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
     printf("Enter a string: ");
    gets(str);

    
    while (str[i] != '\0') {
        
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding the ASCII difference
            str[i] = str[i] + 32;
        }
        
        else if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 32;
        }
        i++;
    }

    
    printf("String with toggled case: %s", str);
}