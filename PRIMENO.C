main(){
 int i,j,t=1,f=4;
 clrscr();
 for(i=1;i<=5;i++)
 {
 t=i;
 f=4;
  for(j=1;j<=i;j++)
  {
    printf("%d ",t);
     t=t+f;
     f--;
     }
  printf("\n");
 }
 getch();
}