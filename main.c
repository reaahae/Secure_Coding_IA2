#include <stdio.h>

int main() {
    int maxInt = 2147483;
    maxInt = maxInt + 1;
    printf("Overflowed value: %d\n", maxInt);
    return 0;
}
