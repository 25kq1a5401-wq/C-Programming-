#include<stdio.h>
#include<conio.h>
void main()
{
   int num,count=0;
   clrscr();
   printf("\n enter a number:");
   scanf("%d",&num);
   while(num>0)
   {
       num=num/10;
       count=count+1;
   }
   printf("\n count of digits=%d",count);
   getch();
}   
