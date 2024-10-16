#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter the number: ",x,y);
   scanf("%d %d", &x,&y);

   printf("Addition: %d\n", x+y);
   printf("Multiplication: %d\n", x-y);
   printf("Count: %d\n", x * y);
   printf("Divide: %d\n", x/y);

   return 0;

}
