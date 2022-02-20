main(){
 int num,rem,sum=0;
 clrscr();
 printf("Enter the any number");
 scanf("%d",&num);
      while(num>0)
      {
       rem=num%10;
       num=num/10;
       sum=sum+rem;

      }
      printf("sum of %d",sum);
   getch();
}