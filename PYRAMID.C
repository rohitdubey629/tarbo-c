main(){
 int r,no,sp,n=7,p,value=1;
 clrscr();
//* printf("Enter the value");
// scanf("%d",&no);

 for(r=1;r<=n;r++)
 {
  for(sp=1;sp<=n;sp++)
  {
   printf(" ");
  }
  n--;
  for(p=1;p<=r;p++)
  {
   printf("%d ",value);
  value++;
  }

  printf("\n");
 }
 getch();
}