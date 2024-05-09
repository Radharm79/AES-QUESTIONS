#include <stdio.h>

// Function to find the length of a string
int stringLength(char str[]) {
    int length = 0;
    // Iterate until the end of the string ('\0' character)
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Calculate the length of the string using the user-defined function
    int length = stringLength(str);

    // Output the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
