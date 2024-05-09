#include <stdio.h>

int main() {
    // Example of escape sequences
    printf("Hello, world!\n");          // Newline
    printf("This is a tab\t.");         // Tab
    printf("This is a single quote: \'"); // Single quote
    printf("This is a double quote: \""); // Double quote
    printf("This is a backslash: \\");  // Backslash
    printf("This is a bell\a sound.");  // Bell sound (may not produce an audible sound in all environments)
    printf("This is a carriage return:\r"); // Carriage return (moves cursor to the beginning of the line)
    printf("This is a formfeed:\f");    // Form feed (used to clear the screen in some environments)
    printf("This is a vertical tab:\v"); // Vertical tab
    printf("This is a backspace:\b");   // Backspace (moves cursor one position back)
    printf("This is a question mark\?"); // Question mark
    printf("This is an octal character: \101"); // Octal representation
    printf("This is a hexadecimal character: \x41\n"); // Hexadecimal representation

    return 0;
}
