#include<stdio.h>
#include<conio.h>
main(){
 int i,num1,num2,max,lcm=1;
 clrscr();
 printf("Enter the two numbers to find lcm:");
 scanf("%d%d",&num1,&num2);
 max=(num1>num2) ? num1:num2;
 i=max;
 while(1)
 {
   if(i%num1==0&&i%num2==0)
   {
    lcm=i;
    break;
   }
   i+=max;
   printf("%d\n",i);
 }
 printf("lcm of %d and %d = %d",num1,num2,lcm);
 getch();
}