main(){
int i,j;

clrscr();
for(i='a';i<='d';i++)
{
  for(j='d';j>=i;j--)
  {
  printf("%c",j);
  }
  printf("\n");
}
getch();
}