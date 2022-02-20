//	write a c program to print all prime numbers between 1 to 10
main(){
 int i,j,num,num2,count=0;
 clrscr();
 printf("Enter the first number");
 scanf("%d",&num);
 printf("Enter the second number");
 scanf("%d",&num2);
 for(i=num;i<=num2;i++)
 {
  count=0;
  for(j=1;j<=i;j++)
  {
    if(i%j==0)
    count++;
  }
  if(count==2)
 printf("Prime number %d\n ",i);
   }
 getch();
}