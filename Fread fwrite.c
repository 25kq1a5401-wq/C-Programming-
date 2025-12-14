#include<stdio.h>
struct student{
        int sno;
        char sname[30];
        float marks;
        char temp;
      };
      main()
      {
      struct student s[60];
      int i;
      FILE *fp;
      fp=fopen("student1.txt","w");
      for(i=0;i<2;i++)
      { 
         printf("Enter details of student %d",i+1);
         printf("student number:");
         scanf("%d",&s[i].sno);
         scanf("%c",&s[i].temp);
         printf("student name:");
         gets(s[i].sname);
         printf("student marks:");
         scanf("%f",&s[i].marks);
         fwrite(&s[i],sizeof(s[i]),1,fp);
      }
      fclose(fp);
      fp=fopen("student1.txt","r");
      for(i=0;i<2;i++)
      {  
          printf("details of student %d are",i+1); 
          fread(&s[i],sizeof(s[i]),1,fp);
          printf("student number=%d",s[i].sno);
          printf("student name=%s",s[i].sname);
          printf("marks=%f",s[i].marks);
      }
      fclose(fp);
      }  
