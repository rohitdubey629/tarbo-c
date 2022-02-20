//lowest number//

#include<stdio.h>
#include<conio.h>
main(){
int a,b,c;
clrscr();
printf("Enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
 printf("lowest number%d",a);
 else if (b<a && b<c)
 printf("lowest number%d",b);
 else if(c<a && c<b)
 printf("lowest number%d",c);
 getch();
}
