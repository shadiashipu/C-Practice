#include <stdio.h>

int main() {
    int num1, num2, num3, average;
    printf("Enter the three integer number: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("Average: %d", average);
    return 0;
    

}
