#include <stdio.h>

int main() {

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3) {
        printf("%d is Maximum", num1);
    }
    if(num2 > num1 && num2 > num3) {
        printf("%d is Maximum", num2);
    }
    if(num3 > num1 && num3 > num2) {
        printf("%d is Maximum", num3);
    }


    return 0;
}

