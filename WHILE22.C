main(){
 int num,rem,rev=0;
 clrscr();
 printf("Enter the any number");
 scanf("%d",&num);
      while(num>0)
      {
       rem=num%10;
       num=num/10;
       rev=rev*10+rem;

      }
      printf("revers of %d",rev);
   getch();
}