
#include <stdio.h>

struct student
{
   char name[20];
   int rn;
   float marks;
};

int main()
{

   struct student s[3];

   {
      for (int i = 0; i <= 3; i++)
      {
         printf("\n Enter the student details :");
        
         scanf("%s %d %f", s[i].name, &s[i].rn, &s[i].marks);
       
      }

     printf("\n All stddent details are:\n");
      for (int i = 0; i <= 3; i++)
      {
         printf("%s\t %d\t %f\t", s[i].name, s[i].rn, s[i].marks);
      }
   }}