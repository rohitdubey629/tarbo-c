main(){
 int i,j,s=4;
 clrscr();
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=s;j++)
  {
  printf(" ");
  }
  s--;
   for(j=1;j<=i;j++)
   {
    printf("* ");
  }
  printf("\n");
 }
 getch();
}
