#include<stdio.h>
#include<conio.h>
void main(){
 int n1,n2,i,j,sum=0,re;
 clrscr();
 printf("Enter the first numbur");
 scanf("%d",&n1);
 printf("Enter the last number");
 scanf("%d",&n2);
 for(i=n1;i<=n2;i++)
 {
   sum=0;
   while(i>1)
  {
       re=i%10;
       i=i/10;
       sum=sum+re;
  }

  printf("%d",sum);
 }
 getch();
}