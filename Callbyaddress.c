#include<stdio.h>
void main()
{
  int a;
  void printnum(int *);
  a=10;
  printf("\nIn Main a=%d",a);
  printnum(&a);
  printf("\nIn Main end a=%d",a);
}
void printnum(int *a)
{
  *a=*a+1;
  printf("In printnum fun a=%d",*a);
}  
