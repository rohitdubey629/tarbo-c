main(){
 int i,j,k=5;
 clrscr();
 for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
    if(i==j||k==j)
    printf("1");
    else
    printf("0");
  }
  printf("\n");
  k--;
 }
 getch();
}