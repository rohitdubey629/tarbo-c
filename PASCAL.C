main(){
 int r,c,s,n,no;
 clrscr();
 printf("Enter the number or row");
 scanf("%d",&no);
for(r=0;r<=no;r++)
 {
  for(s=0;s<(no-r);s++)
  {
   printf(" ");
  }
  n=1;
  for(c=0;c<=r;c++)
  {
   printf(" %d",n);
 //  printf("n=%d*%d-%d/%d+1",n,r,c,c);
   n=n*(r-c)/(c+1);
  }
  printf("\n");
 }
 getch();
}