#include<stdio.h>
#include<conio.h>
void main()
{
     int num1,num2,num3,sum;
     float avg;
     clrscr();
     printf("Enter the First Number=");
     scanf("%d",&num1);
     printf("Enter the Second number=");
     scanf("%d",&num2);
     printf("Enter the Third number=");
     scanf("%d",&num3);
     sum=num1+num2+num3;
     avg=sum/3;
     printf("\nThe Sum of Three Numbers=%d",sum);
     printf("\nThe Average of Three Numbers=%.f",avg);
     getch();
}     
