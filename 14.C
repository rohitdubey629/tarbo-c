#include<stdio.h>
#include<conio.h>
main(){

 int num,r,sum=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(num>=1)
 {
  r=num%10;
  num=num/10;
  sum=sum+r;
 }
 printf("sum of digit %d",sum);
 getch();
}