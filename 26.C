//Write a c program to check whether a number is prime number or not

main(){
 int i,num,count=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  if(num%i==0)
  count++;
 }
 if(count==2)
 printf("Prime number %d ",num);
 else
 printf("not prime number %d ",num);
 getch();
}