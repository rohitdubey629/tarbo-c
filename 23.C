
//Write a c program to calculate factorial of a number

main(){
 int i,f=1,num;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  f=f*i;
 }
 printf("Factorial %d",f);
 getch();
}