main(){
 int i,num,f,t,sum=0,r;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
  t=num;
  i=1;
 while(i<=1)
 {
 //  r=num%10;
  f=num*num;
  r=f%10;
  i++;
 }
  if(t==r)
  printf("last digit in same %d", t);
  else
  printf("not last digit is same %d",t);
  getch();
}