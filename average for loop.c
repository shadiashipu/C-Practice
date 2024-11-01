#include <stdio.h>

int main(){

    int n, i;
    float average, sum = 0, count = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + i;
        count = count+1;
    }
        average = sum / count;
        printf("Sum = %f\n", average);

    return 0;
}
