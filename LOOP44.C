main(){
 int i,j,k=1;
 clrscr();
 for(i=4;i>=1;i--)
 {
   for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  for(j=1;j<=k;j++)
  {
   printf("5");
  }
  k++;
  printf("\n");
 }
 getch();
}