main(){
long int a[4][4],b[4][4],c[4][4],i,j;
 clrscr();
 printf("Enter the first 9 number");
 for(i=0;i<=3;i++)
 for(j=0;j<=3;j++)
 scanf("%ld",&a[i][j]);
 printf("Enter the second 9 number");
 for(i=0;i<=3;i++)
 for(j=0;j<=3;j++)
 scanf("%ld",&b[i][j]);
 for(i=0;i<=3;i++)
{
 for(j=0;j<=3;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 printf("%ld ",c[i][j]);
 }
 printf("\n");
}
getch();
}