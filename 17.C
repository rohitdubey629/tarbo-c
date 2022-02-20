//write a c program to check whether a number is palindrome or not
#include<stdio.h>
#include<conio.h>
main(){
 int num,r,sum=0,t;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 t=num;
 while(num>0)
 {
  r=num%10;
  num=num/10;
  sum=sum*10+r;
 }
 if(t==sum)
 printf("palindrom number");
 else
 printf("not palindrom");
 getch();
}