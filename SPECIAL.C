main(){

 int r,num,t,sum=0,f,i;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 t=num;
 while(num>0)
 {
  r=num%10;
 f=1;
 for(i=r;i>=1;i--)
 {
  f=f*i;
 }
 sum=sum+f;
 num=num/10;
 }
 if(t==sum)
 printf("Special number %d",sum);
 else
 printf("not special number %d",sum);
 getch();
}