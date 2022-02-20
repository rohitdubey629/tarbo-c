main(){
 int num,r,sum;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(num>0)
 {
  r=num%10;
  num=num/10;
  if(r%2==0)
  {
  sum=sum+r;
}
 printf("%d",sum);
 getch();
}