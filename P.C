main(){
int p,q,amt;
clrscr();
printf("Enter the price\n");
scanf("%d",&p);
printf("Enter the quantity");
scanf("%d",&q);
amt=q*p;
if(q>=10)
{
   amt=amt-amt*10/100;
   }
   printf("net amount=%d",amt);
   getch();
}