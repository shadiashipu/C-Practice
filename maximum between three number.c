#include <stdio.h>

int main() {

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2) {
        printf("%d is Maximum", num1);
    }
    else if(num2 > num3) {
        printf("%d is Maximum", num2);
    }
    else if(num3 > num1) {
        printf("%d is Maximum", num3);
    }

    return 0;
}
