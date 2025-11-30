#include<stdio.h>
#include<conio.h>
void main()
{
int lower,upper;
scanf("%d%d", &upper,&lower);
if(lower<=upper)
{
  while(lower<upper)
{
  if(lower%2==0)
{
  printf("%d",lower);
}
lower++;
}
  printf("%d",lower);
}
else
{
  printf("Invalid Input");
}
getch();  
}
