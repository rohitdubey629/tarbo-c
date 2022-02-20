main(){
 int num,rem,rev=0,t;
 clrscr();
 printf("Enter the any number");
 scanf("%d",&num);
 t=num;
      while(num>0)
      {
       rem=num%10;
       num=num/10;
       rev=rev*10+rem;

      }
      if(t==rev)
      printf("paildrom numbr");
      else
      printf("not paildrom number");
   getch();
}