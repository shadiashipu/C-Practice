#include <stdio.h>

int main(){
    int n, i = 1, sum = 0;
    scanf("%d", &n);

    while(i <= n){
        sum = sum + i;
        i = i + 1;
    }

    printf("%d\n", sum);

    return 0;
}

