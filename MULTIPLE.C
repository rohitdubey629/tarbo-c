#include<stdio.h>
#include<conio.h>
main(){
int age,nat;
clrscr();
printf("Enter the age and nat ");
scanf("%d%d",&age,&nat);
if(age>18)
{  if(nat==1)
printf("you can vote");
else
printf("you can not vote");
}
getch();
}
