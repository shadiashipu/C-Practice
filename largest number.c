#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Input the values of three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);

  if(num1 > num2 && num1 > num3) {
        printf("The 1st Number is greatest among three.\n", num1);
    }
    else if(num2 > num1 && num2 > num3) {
        printf("The 2nd Number is greatest among three.\n", num2);
    }
    else if(num3 > num1 && num3 > num2) {
        printf("The 3rd Number is greatest among three.\n", num3);
    }
    return 0;
}