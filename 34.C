main(){
 int i=0,j,rem,num,sum=1,t=0,r;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 i=0;
  r=num;
 while(i<num)
 {
   rem=num%10;
   sum=1;
   for(j=1;j<=rem;j++)
   {
    sum=sum*j;
   }
   num=num/10;
    t=t+sum;
 }
   if(r==t)
    printf("Strong number %d",r);
    else
    printf("Not strong number %d",r);
 getch();
}