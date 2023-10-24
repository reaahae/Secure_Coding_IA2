#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int *)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    free(array);
    return 0;
}
