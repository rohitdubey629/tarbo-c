main(){
 int i,j,t=1,x=10;
 clrscr();
 for(i=1;i<=10;i++)
 {
 t=i;
 x=10;
  for(j=1;j<=10;j++)
  {
     printf("%d\t",t);
     t=t+x;
  }
  printf("\n");
 }
 getch();
}