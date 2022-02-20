main(){
 int i,j,r,k=1,v=3;
 clrscr();
 for(i=1;i<=4;i++){
  for(j=1;j<=v;j++){
   printf(" ");
  }
  v--;
  for(r=1;r<=i;r++){
   printf("%d ",k);
   k++;
  }
  printf("\n");
 }
 getch();
}