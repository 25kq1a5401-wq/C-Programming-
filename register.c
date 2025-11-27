#include<stdio.h>
void main()
{
  register int mainvar;
  void printnum();
  mainvar=10;
  printnum();
  printf("\nin main:%d",mainvar);
}
void printnum()
{
     auto int mainvar;
     printf("\n printnum:%d",mainvar);
}       
