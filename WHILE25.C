main(){
 int num,rem,sum=0,t;
 clrscr();
 printf("Enter the any number");
 scanf("%d",&num);
 t=num;
      while(num>0)
      {
       rem=num%10;
       num=num/10;
       sum=sum+(rem*rem*rem);

      }
      if(t==sum)
      printf("Arm strong number");
      else
      printf("Not Arm strong");
   getch();
}