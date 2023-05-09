#include<stdio.h>
#include<conio.h>

main()

{

   float p,r,t,si;
   printf("enter p amount=");
   scanf("%f",&p);

   printf("enter rate of=");
   scanf("%f",&r);

   printf("enter time in year=");
   scanf("%f",&t);

   si=(p*r*t)/100;

   printf("\nsimple intrest=%2f",si);

   getch();

   }