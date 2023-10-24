#include <stdio.h>

int main() {
    char password[10];
    printf("Enter password: ");
    gets(password);
    printf("Password: %s\n", password);
    return 0;
}
