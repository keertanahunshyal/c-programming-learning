#include <stdio.h>

int main() {
    int age;
    float height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);

    return 0;
}
