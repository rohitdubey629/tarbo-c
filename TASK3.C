main(){
 int i,j,k=2;
 clrscr();
 for(i=1;i<=4;i++){
  for(j=1;j<=i;j++){
   printf("%d ",k);
   k=k+2;
  }
  printf("\n");
 }
 getch();
}