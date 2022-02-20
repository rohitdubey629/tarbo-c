main(){
 int i=1,sum=0,mult=1,num,rev,t;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 t=num;
 while(i<=num)
 {
   rev=num%10;
   num=num/10;
 //  printf("%d",rev);
   sum=sum+rev;
   mult=mult*rev;
 }
 if(sum==mult)
 printf("sum= %d\nmult=%d\n%d =this is spy number",sum,mult,t);
 else
 printf("sum= %d\nmult=%d\n%d =this is not spy number",sum,mult,t);
 getch();
}