#include <stdio.h>

int main(){
    int n, i = 1, sum = 0;
    scanf("%d", &n);

    while(i <= n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i = i + 1;
    }

    printf("%d\n", sum);

    return 0;
}

