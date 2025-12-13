#include<stdio.h>
#include<conio.h>
void main()
{
   float u,a,d;
   int t;
   clrscr();
   printf("\n enter the value of a:");
   scanf("%f",&a);
   printf("\n enter the value of u:");
   scanf("%f",&u);
   printf("\n enter the value of t:");
   scanf("%d",&t);
   d=(u*t)+(a*t*t)/2;
   printf("\n the distance:%f",d);
   getch();
}   
