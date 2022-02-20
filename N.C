main(){
long int r,q,amt,dis,total,y;
 clrscr();
 printf("Enter the Quantity ");
 scanf("%ld",&q);
 printf("Enter the price ");
 scanf("%ld",&r);
 if(q>=200)
 dis=20;
 else if(q>=100)
 dis=10;
 else if(q>=50)
 dis=5;
 else
 dis=0;
 amt=q*r;
 printf("Total amount %ld\n",amt);
 y=amt*dis/100;
 printf("Discount amount %ld\n",y);
 total=amt-y;
 printf(" total amount %ld\n",total);

 getch();
}