main(){
  int i,j;
  clrscr();
  for(i=1;i<=4;i++)
  {
   for(j=1;j<=4;j++)
   {
   if(i%2==0)

    printf("%d",j);
    else
    printf("%d",i);
   }

   printf("\n");
  }
  getch();
}