//write a c program to enter a number and print words.
#include<stdio.h>
#include<conio.h>
main(){
long int num,r,rev=0;
 clrscr();
 printf("Enter the number conver to word");
 scanf("%ld",&num);
 while(num>0)
 {
  r=num%10;
  num=num/10;
  rev=rev*10+r;
 }
 while(rev>0)
 {
  switch(rev%10)
  {
   case 1:
      printf("one ");
   break;
   case 2:
      printf("tow ");
   break;
   case 3:
       printf("three ");
   break;
   case 4:
       printf("four ");
   break;
   case 5:
       printf("five ");
   break;
  }
  rev=rev/10;
 }
 getch();
}