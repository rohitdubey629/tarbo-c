main(){
 int i,j,k=5;
 clrscr();
 for(i=5;i>=1;i--)
 {
 for(j=5;j>=1;j--)
  {
  if(j==k&&i==k||j<=k) //if(i<=k&&j<=k)
  {
   printf("%d",k);
   }
   else
   printf("%d",j);
  }
  k--;
  printf("\n");
 }
 getch();
}