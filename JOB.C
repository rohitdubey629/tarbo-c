#include<stdio.h>
#include<conio.h>
main(){
int exp;
char gen;
clrscr();
printf("Enter the gen and exp");
scanf("%c%d",&gen,&exp);
if(gen=='f'||gen=='F'||gen=='m'||gen=='M')
{
if(exp>10)
printf("you job done your sallry 51000");
else
printf("exp is not greater than 10");
}
else
printf("not valid job");
getch();
}