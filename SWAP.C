#include<stdio.h>
void main(){
 int a,b,c;
 clrscr();
 printf("Enter two no");
 scanf("%d%d",&a,&b);
 printf("Before swap a=%d\n and b=%d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\nAfter swap a=%d\n and b=%d",a,b);
 getch();
}