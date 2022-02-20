gout#include<stdio.h>
#include<conio.h>

int main(){
clrscr();
int rohit;
printf("Enter the number of table\n");
scanf("%d", &rohit);
for(int i = 1; i <= 10; i++){
printf("%d * %d = %d", rohit, i, rohit*i);
printf("\n");
}
getch();
return 1;
}
