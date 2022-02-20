
main(){
 int num1,num2,lcm,r=1;
 clrscr();
 printf("Enter the first number");
 scanf("%d",&num1);
 printf("Enter the second number");
 scanf("%d",&num2);
lcm=(num1>num2) ? num1 : num2;
 while(r)
 {
   if(lcm%num2==0||lcm%num1==0)
   {
    printf("lcm of %d and %d is %d\n",num1,num2,lcm);
    r=0;
   }
   lcm++;
}
 getch();
}