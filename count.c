#include <stdio.h>

int main(){
    int n, x, i = 1, count=0;

    scanf("%d %d", &n, &x);

    while(i <= n){
      if(i % x == 0){
        count = count + 1;

      }

        i = i + 1;
    }
    printf("1 to %d divided by %d, %d times.\n", n, x, count);
    return 0;
}
