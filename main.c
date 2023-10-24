#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8]; // A buffer with a size of 8 bytes
    char input[12]; // Input string with more than 8 characters

    printf("Enter a string (more than 8 characters): ");
    gets(buffer); // Unsafe function for input

    printf("Buffer: %s\n", buffer);

    return 0;
}
