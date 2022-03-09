main(){
 int a[3][3],i,j,sum=0;
 clrscr();
 printf("Enter the 3*3 matrix");
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   if(i+j==2)
   sum=sum+a[i][j];
  }
 }
 printf("\n sum of sub daigonal element= %d ",sum);
 getch();
}