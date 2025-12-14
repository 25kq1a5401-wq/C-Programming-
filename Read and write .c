#include<stdio.h>
int main()
{   
   FILE *fp;
    char fName[20];
    printf("\nEnter file name to create:");
    scanf("%c",fName);
    fp=fopen(fName,"w");
    if(fp==NULL)
    { 
       printf("File does not created!!!");
       exit(0); 
    }
    printf("File created successfully.");
    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
    printf("\nData printed successfully.");
    fclose(fp);
    fp=fopen(fName,"r");
    if(fp==NULL)
    { 
        printf("\nFile not open");
        exit(0);
    }
    printf("Contents of file is:\n");
    printf("%c",gets(fp));
    printf("%c",gets(fp));
    printf("%c",gets(fp));  
    fclose(fp);
    return 0;
}      
