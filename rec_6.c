#include <stdio.h>

// Function to calculate length of string recursively
int stringLength(char *str) {
    // Base case: if the current character is null ('\0'), return 0
    if (*str == '\0')
        return 0;
    // Recursive case: return 1 + length of the rest of the string
    else
        return 1 + stringLength(str + 1);
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string using recursion
    int length = stringLength(str);

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
