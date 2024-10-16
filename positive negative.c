#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ", x);
    scanf("%d", &x);

    if(x > 0){
      printf("Positive");
    }
    else if(x == 0){
     printf("The input is zero");
    }
    else {
     printf("Negative");
    }

    return 0;
}
