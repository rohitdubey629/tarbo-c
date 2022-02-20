#include<stdio.h>
#include<conio.h>
main(){
int i,j,k=0,s=1;
clrscr();
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
 {
  if(i%2==0)
  printf("%d ",k=k+2);
  else
  {
  printf("%d ",s);
  s=s+2;
  }
 }
  k=0;
 s=1;
 printf("\n");
}
 getch();
}