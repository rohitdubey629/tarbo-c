main(){
 int i,n,j,s;
 clrscr();
 printf("Enter any number:");
 scanf("%d",&n);
 s=n;

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=s;j++)
    if(i<=1&&i>=4)
    {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d ",j);
  }
  printf("\n");
  s--;

   } else{
   s++;
    for(j=1;j<=s;j++)
    {
     printf(" ");
    }
    for(j=i;j>=1;j--)
    {
     printf("%d",j);
    }
    printf("\n");
    }
 getch();
}