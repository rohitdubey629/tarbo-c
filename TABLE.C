#include<stdio.h>
#include<conio.h>
main(){
int i,num;
clrscr();
printf("Enter the any number");
scanf("%d",&num);
for(i=1;i<=10;i++)
printf("\n%d*%d=%d",num,i,num*i);
getch();

}