#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1;
  void printnum(int);
  printnum(i);
}
void printnum(int i)
{
  printf("%d ",i);
  i++;
  if(i==6)
  exit(0);
  printnum(i);
}  
