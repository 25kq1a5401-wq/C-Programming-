#include<stdio.h>
void main()
{
  void printnum();
  printnum();
}
void printnum()
{
  static int i=1;
  printf("%d ",i++);
  if(i==6)
  exit(0);
  printnum();
}    
