#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the two integer number: ", x, y);
    scanf("%d %d", &x, &y);
    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %d", x / y);
    return 0;
