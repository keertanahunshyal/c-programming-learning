#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
