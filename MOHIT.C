main(){
  int i,j,n=5,s;
  clrscr();
  for(i=1;i<=4;i++)
  {
   for(s=1;s<=n;s++)
   {
     printf(" ");
     }
   n--;

   for(j=i;j>=1;j--)
    {
    printf("%d",j);

   }
   printf("\n");
  }
  getch();
}