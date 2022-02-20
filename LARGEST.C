// first largest number //

#include<stdio.h>
#include<conio.h>
main(){

   int a,b,c;
   clrscr();
   printf("Enter three number");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c)
     printf("largest no.%d",a);
     else if(b>a && b>c)
     printf("largest no.%d",b);
     else if(c>a && c>b)
     printf("largest no.%d",c);
     getch();
}