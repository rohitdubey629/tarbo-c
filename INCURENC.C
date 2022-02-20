#include<stdio.h>
#include<conio.h>
main(){
int nat,vid,age,agef;
clrscr();
printf("Enter vid ,nat,age");
scanf("%d%d%d",&nat,&vid,&age,agef);
if(nat==1&&vid==2&&age>50||agef>40)

 printf("you valid for incurence%d%d",age,agef);
 else
 printf("not valid incurence");

 getch();
}