#include <stdio.h>

 int main(){
    int AE = 30, AC = 20, BC = 10, BD = 40, ABDE, ABC, ACDE;

    ABDE = 0.5 * (AE + BD) * AC;
    ABC = 0.5 * BC * AC;
    ACDE = ABDE - ABC;

    printf("Result : %d", ACDE);

    return 0;
}
