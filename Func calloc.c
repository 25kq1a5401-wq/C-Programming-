#include<stdio.h>
void main()
{  
    int *ptr,i,ele;
    printf("Enter number of elements:");
    scanf("%d",ele);
    ptr=(int*)calloc(ele,sizeof(int));
    for(int i=0;i<ele;i++)
    scanf("%d",&ptr[i]);
    for(int i=0;i<ele;i++)
    printf("%d",ptr[i]);
}    
