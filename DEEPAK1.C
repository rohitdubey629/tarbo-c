main(){
 int i,j,k=1;
 clrscr();
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=i;j++)
  {
    if(k%2==0)
    {
       printf(" 1 ");
       k++;
    }
    else
    {
    printf(" 0 ");
  k++;
  }
  }
  printf("\n");
 }
 getch();
}