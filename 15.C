// write a c program to calculate product of digit of a number
#include<stdio.h>
#include<conio.h>

main(){
 int num,r,sum=1;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(num>=1)
 {
  r=num%10;
  num=num/10;
  sum=sum*r;
 }
 printf("product of digit %d",sum);
 getch();
}