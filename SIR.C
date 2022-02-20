main(){
 int i,j,s=3,k=0,t=2,n=5,m=4,o=3;
 clrscr();
 for(i=1;i<=9;i++)
  {
  for(j=1;j<=s;j++)
  {
   printf("  ");
  }
  if(i>=1&&i<=4)
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
  if(i==2||i==3||i==4)
  for(j=k;j>=1;j--)
  {
   printf("* ");
  }
    if(i>=5&&i<8)  {
    for(j=1;j<=t;j++)
    {
     printf(" ");
    }
    for(j=n;j>=1;j--)
    {
     printf("* ");
    }
    n=n-2;
    t=t+2;
    }
    if(i>=8) {
       for(j=m;j>=1;j--)
       {
	printf(" ");
       }

    for(j=1;j<=o;j++){
     printf("* ");
    }
    o=o+2;
    m=m-2;}
  k++;
  printf("\n");
  s--;
 }
 getch();
}