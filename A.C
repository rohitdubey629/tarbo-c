main(){

 int i,num,sum=0;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  if(num%i==0)

    sum++;
 }
 if(sum==2)
  printf("praime number ");
  else
  printf("not prime number");


 getch();
}