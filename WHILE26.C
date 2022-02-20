main(){
long int num,rem,count=0;
 clrscr();
 printf("Enter the any number");
 scanf("%ld",&num);
      while(num>0)
      {
       rem=num%10;
       num=num/10;
       count++;

      }
      printf("count of number %ld",count);
   getch();
}