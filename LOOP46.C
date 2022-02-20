main(){
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
  {
  if(i==j||i+j==6||i*j==12||i*j==6)
   printf("0");
   else
   printf("1");
  }
  printf("\n");
 }
 getch();
}