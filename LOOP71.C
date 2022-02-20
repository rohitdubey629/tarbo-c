main(){
 int i,j,t=3;
 clrscr();
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=t;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  printf("\n");
  t--;
 }
 t=1;
 for(i=3;i>=1;i--)
 {
  for(j=1;j<=t;j++)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
   }
   printf("\n");
   t++;
  }
  getch();
 }
