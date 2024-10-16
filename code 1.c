#include<stdio.h>

int main()

{
   char Name[6];
   int Numofchickenfries;

   printf("What's your name?\n");
   scanf("%s",Name);

   printf("How many chickenfries you want to order?\n");
   scanf("%d",& Numofchickenfries);

   printf("%s has ordered %d chickenfries",Name,Numofchickenfries);

   return 0;


}
