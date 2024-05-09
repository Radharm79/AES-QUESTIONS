#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if((c>='A' && c<='Z')||(c>='a' && c<='z'))
    {
        switch (c)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Vowel!");
            break;
        
        default:
            printf("Consonant!");
            break;
        }
    }
    else
    {
        printf("Not a letter!");
    }
    
}