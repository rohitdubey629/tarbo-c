#include<stdio.h>
#include<conio.h>
main(){
int d,m;
clrscr();
printf("Enter the any number");
scanf("%d",&d);
m=d/30;
d=d%30;
printf("month=%d\nday=%d",m,d);
getch();
}