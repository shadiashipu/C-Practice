#include <stdio.h>

int main() {

    int week;
    printf("Week: ");
    scanf("%d", &week);

    if(week == 1) {
        printf("Saturday");
    }
    else if(week == 2) {
        printf("Sunday");
    }
    else if(week == 3) {
        printf("Monday");
    }
    else if(week == 4) {
        printf("Thusday");
    }
    else if(week == 5) {
        printf("Wednesday");
    }
    else if(week == 6) {
        printf("Thursday");
    }
    else if(week == 7) {
        printf("Friday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
