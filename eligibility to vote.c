#include <stdio.h>

int main(){
    int x;
    printf("Enter voters age:");
    scanf("%d", &x);

    if(x <=18){
            printf("Sorry! You are not eligible to vote!");
        }
    else{
        printf("You can cast your vote!");
    }
    return 0;

}
