main(){
long i,n;
clrscr();
scanf("%ld",&n);
for(i=1;i<=n;i++)
    {
       if(n%i==0)
  printf("\n%ld",i);
	   }
  getch();
}