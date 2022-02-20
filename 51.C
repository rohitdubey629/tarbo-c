//pascal
main(){
 int i,j,s=4;
 clrscr();
for(i=1;i<=5;i++)
{
 for(j=s;j>=1;j--)
 {
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
 printf("%d",j);
 }
 s--;
 printf("\n");
}

getch();
}