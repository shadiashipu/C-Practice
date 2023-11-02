#include <stdio.h>

int main(){

    int num1, num2, num3;
    printf("The 1st number: ");
    scanf("%d", &num1);
    printf("The 2nd numner: ");
    scanf("%d", &num2);
    printf("The 3rd number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("The greatest: %d", num1);
    }
    if(num2 > num1 && num2 > num3){
        printf("The greatest: %d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf("The greatest: %d", num3);
    }
    return 0;
}
