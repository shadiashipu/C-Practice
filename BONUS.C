#include <stdio.h>

int main() {

int salary, year,  bonus, percentage = 0;

     printf("Salary: ");
     scanf("%d", &salary);
     printf("Year of Service: ");
     scanf("%d", &year);

     if(year > 10) {
       percentage = 10;
     }
     else if(year >= 6 && year <= 10) {
        percentage = 8;
     }
     else if(year < 6) {
        percentage = 5;
     }
     bonus = (salary * percentage) / 100;

     printf("Bonus: %d\n", bonus);
     printf("Percentage: %d%%", percentage);
}
