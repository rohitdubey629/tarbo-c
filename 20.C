// write a c program to print ASCII character with their values
#include<stdio.h>
#include<conio.h>
main(){
  int i;
  clrscr();
  for(i=0;i<=255;i++)
  {
   printf("%c ",i);
  }
 getch();
}