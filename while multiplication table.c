#include <stdio.h>

int main(){
    int n, i = 1, z;
    scanf("%d", &n);

    while(i <= 50){
        z = n * i;
        if(i % 2 != 0){
            printf("%d * %d = %d\n", n, i, z);
        }
        i = i + 1;
    }


    return 0;
}
