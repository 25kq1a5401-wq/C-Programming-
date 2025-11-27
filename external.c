#include<stdio.h>
#include<conio.h>
int i=1;
void main()
{
  int printnum();
  printnum();
  printf("final I value is:%d",i);
}
int printnum()
{
   printf("%d ",i++);
   if(i==6)
   return 0;
   printnum();
}     
