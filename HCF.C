//write a c program to find hcf of two number.
/*
  num1= 12 factor=(1) (2) (3) 4 (6) 12
  num2= 30 factor= (1) (2) (3)  (6) 15 30
  lasr digit comman in factorial in 6=hcf
*/
main(){
 int i,num1,num2,t=1,min;
 clrscr();
 printf("Enter the first number");
 scanf("%d",&num1);
 printf("Enter the second number");
 scanf("%d",&num2);
min=(num1<num2) ? num1 : num2;
 for(i=1;i<=min;i++)
 {

   if(num1%i==0&&num2%i==0)

    t=i;

}
printf("%d",t);
 getch();
}