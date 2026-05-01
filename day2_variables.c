What I Learned:

What are variables in C
Different data types (int, float, char)
How to declare and initialize variables
How to print variables using printf()


#include <stdio.h>

int main() {
    int age = 18;
    float height = 5.6;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}



Key Concepts:

int → stores whole numbers
float → stores decimal numbers
char → stores single characters
%d → format specifier for int
%f → format specifier for float
%c → format specifier for char
