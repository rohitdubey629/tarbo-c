#include<sdton.h>
#include<conio.h>
main(){
int n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
if(n>10)
n=n+5;
else
n=n-5;
printf("%d",n);
getch();
}