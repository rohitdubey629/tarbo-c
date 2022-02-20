main(){
 int i,j,k=5;
 clrscr();
 for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
   if(i==1&&j<=5||j<=5&&j==1||j==5&&k==5||i==5)
   printf("@");
     else
   printf("0");
  }
  printf("\n");
 }
 getch();
}