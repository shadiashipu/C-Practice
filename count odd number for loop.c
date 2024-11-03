#include <stdio.h>

int main (){
    int a=12, b=12, i, count = 0;

    scanf("%d %d", &a, &b);

    for(i = b + 1;i < a; i++){
            if(i % 2 != 0){
                count = count+1;
            }
    }

    return 0;

}
