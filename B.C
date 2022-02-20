#include<stdio.h>
main(){
int age;
char gen;
clrscr();
printf("Enter the gender");
scanf("%c",&gen);
printf("Enter the age");
scanf("%d",&age);
if(gen=='f'||gen=='F')
      { if(gen>=40)

      printf("valid insurence");

      else
      printf("not valid insurence ");

      }
      else
      { if(gen>=50)
      printf("valid insurence");
      else
      printf("not valid");      }
      }
			  getch();
}