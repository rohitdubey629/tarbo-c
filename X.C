main(){
  int i,j,num,n,c;
  clrscr();
  printf("Enter the number");
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
   for(j=0;j<(num-i);j++)
   {
    printf(" ");
    }
    n=1;
    for(c=0;c<=i;c++)
    {
      printf("%d ",n);
      n=n*(i-c)/(c+1);
    }
    printf("\n");
  }
  getch();
}