#include <stdio.h>

 int main(){
    int AE, AC, BC, BD, ABDE, ABC, ACDE;

    scanf("%d %d %d %d", &AE, &AC, &BC, &BD);

    ABDE = 0.5 * (AE + BD) * AC;
    ABC = 0.5 * BC * AC;
    ACDE = ABDE - ABC;

    printf("Result : %d", ACDE);

    return 0;
}
