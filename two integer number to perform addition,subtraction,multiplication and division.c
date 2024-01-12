#include <stdio.h>

int main() {
    int x, y, sum;
    printf("Enter the two integer number: ", x, y);
    scanf("%d %d", &x, &y);
    sum = x +y;
    printf("Addition: %d\n", sum);
    sum = x - y;
    printf("Subtraction: %d\n", sum);
    sum = x * y;
    printf("Multiplication: %d\n", sum);
    sum = x / y;
    printf("Division: %d", sum);
    return 0;
