#include<stdio.h>
#include<conio.h>
#define sum(X,Y)(X+Y)
void main(){
 int a,b;
 clrscr();
 printf("Enter the radios\n");
 scanf("%d%d",&a,&b);
 printf("Area %d",sum(a,b));
 getch();
}