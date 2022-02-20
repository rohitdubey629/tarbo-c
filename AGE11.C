#include<conio.h>
#include<stdio.h>
 void main()
{
 void add(void);
clrscr();
add();
add();
getch();
}
void add()
{
int a,b,c;
printf("\nEnter tow number\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}