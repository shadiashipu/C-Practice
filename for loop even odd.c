#include <stdio.h>

int main (){
    int n, i, num;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
            scanf("%d", &num);
            if(num % 2 == 0){
                printf("%d is EVEN\n", num);
            }
            else{
                printf("%d is ODD\n", num);
            }
    }

    return 0;

}