#include<stdio.h>
#include<string.h>
void main()
{
  char name[30];
  int length=0,i;
  printf("Enter the name:");
  gets(name);
  for(i=0;i++)
  {
     if(name[i]!='\0');
     length++;
     else
     break;
  }
  printf("length is %d",length);
}     
