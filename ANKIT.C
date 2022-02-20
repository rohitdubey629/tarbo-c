main(){
 int num1=0,num2=1,sum,i;
 clrscr();
 printf("%d %d",num1,num2);
 for(i=1;i<=7;i++)
 {
  sum=num1+num2;
  printf(" %d " ,sum);
  num1=num2;
  num2=sum;
 }
 getch();
}