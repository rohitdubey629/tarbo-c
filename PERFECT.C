main(){
 int i=1,j,n,k=0;
 clrscr();
 printf("Enter any number");
 scanf("%d",&n);
// for(i=1;i<=n/2;i++)
//i=1;
  while(i<=n/2)
 {
  if(n%i==0)
  k=k+i;
  i++;
 }
 if(n==k)
 printf("perfect no.%d",n);
 else
 printf("not perfect number %d",n);
 getch();
}