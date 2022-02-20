main(){
 int i,j,k=1,t=8,f=9,n=16;
 clrscr();
 for(i=1;i<=4;i++){
  for(j=1;j<=4;j++){
   if(i==1)
   {
   printf("%d ",k);
   k++; }
   else if(i==2) {
   printf("%d ",t);
   t--; }
   else if(i==3){
   printf("%d ",f);
   f++;  }
   else if(i==4)  {
   printf("%d ",n);
   n--;   }
  }
  printf("\n");
 }
 getch();
}