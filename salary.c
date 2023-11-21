#include <stdio.h>

int main() {

    int MALE_18_30 = 700;
    int FEMALE_18_30 = 750;
    int MALE_30_40 = 800;
    int FEMALE_30_40 = 850;
    int age;
    printf("Age: ");
    scanf("%d", &age);

    char sex;
    printf("Sex: ");
    scanf(" %c", &sex);

    int days;
    printf("Number of days: ");
    scanf("%d", &days);

    if(age >= 18 && age < 30) {
        if(sex == 'M'){
            printf("Day: %d\nSalary: %d", MALE_18_30, days * MALE_18_30);
        }
        else if(sex == 'F'){
            printf("Day: %d\nSalary: %d", FEMALE_18_30, days * FEMALE_18_30);
        }
    }
    else if(age >= 30 && age <= 40){
        if(sex == 'M'){
            printf("Day: %d\nSalary: %d", MALE_30_40, days * MALE_30_40);
        }
        else if(sex == 'F'){
            printf("Day: %d\nSalary: %d", FEMALE_30_40, days * FEMALE_30_40);
        }
    }
    return 0;
}
