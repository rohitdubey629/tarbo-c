main(){
  int i,j;
  clrscr();
  for(i=1;i<=4;i++)
  {
   for(j=4;j>=1;j--)
   {

    printf("%d",j*j-1);
   }
   printf("\n");
  }
  getch();
}