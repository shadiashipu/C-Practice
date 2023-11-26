#include <stdio.h>

int main() {

    int i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i = i +1) {
        if(i % 2 == 0) {
            printf("Even %d\n", i);
        }
        else{
            printf("Odd %d\n", i);
        }
    }
}
