#include <stdio.h>

int main() {
    int i = 1;

    printf("Using while loop:\n");

    while(i <= 5) {
        printf("%d\n", i);
        i++;
    }

    int j = 1;

    printf("\nUsing do-while loop:\n");

    do {
        printf("%d\n", j);
        j++;
    } while(j <= 5);

    return 0;
}
