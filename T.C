
#include<stdio.h>
#include<conio.h>
void main(){
int gen,age;
clrscr();
printf("Enter the gen and age");
scanf("%d%d",&age,&gen);

    if(age>=40&&gen=="m")
    printf("you valid for indian insurence list");

    else
    printf("not a valid  indian insurence id ");
       getch();
}