main(){
 int i,num,t,ar,sum=0,re,f;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 t=num;
 while(num>0)
 {
    re=num%10;
    f=1;
   for(i=1;i<=3;i++)
   {
    f=f*re;
   }
   sum=sum+f;
   num=num/10;
 }

 if(t==sum)
 printf("armstrong number %d",sum);
 else
 printf("not armstrong number %d",sum);
getch();
}
