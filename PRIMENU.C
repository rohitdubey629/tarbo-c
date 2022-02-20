main(){
 int num,i=1,count=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(i<=num)
 {
  if(num%i==0)
  count++;
 }
 i++;
 if(count==2)
 printf("prime number ");
 else
 printf("not prime number");
 getch();
}