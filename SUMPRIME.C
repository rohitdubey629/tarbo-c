//	write a c program to find sum of all prime number between 1 to n.
main(){
 int i,j,num,num2,count=0,sum=0;
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
  {
    sum=sum+i;
  printf("Prime number %d\n ",i);
    }
   }
   printf("Prime number %d\n ",sum);
 getch();
}