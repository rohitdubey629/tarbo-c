main(){
 int i,j,t,x;
 clrscr();
 for(i=1;i<=5;i++)
 {
 t=i;
 x=4;
  for(j=1;j<=i;j++)
  {
   printf("%d ",t);
   t=t+x;
   x--;
  }
  printf("\n");
 }
 getch();
}