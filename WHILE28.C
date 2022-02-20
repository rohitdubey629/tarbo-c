main(){
 int num,rem,sum,sq=0,t;
 clrscr();
 printf("Enter the any number");
 scanf("%d",&num);
 t=num;
 sq=num*num;
      while(sq>0)
      {
       rem=sq%10;
       sq=sq/10;
       sum=sum+rem;

      }
      if(t==num)
      printf("neon number");
      else
      printf("not neon number");
   getch();
}