

main(){

 int n,t,a,b,c;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
 a=0;  b=1;
 for(t=1;t<=n;t++)
 {
     //  c=a+b;
      printf("faboniki %d\n",c);
      c=a+b;
      a=b;
      b=c;

 }
 getch();
}