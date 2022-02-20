main(){
 int i;
 clrscr();
 for(i=1;i<=10;i++)
 {
 if(i==6)
 continue;
  printf("%d",i);
  printf("hello");
  printf("\n");
  if(i==4||i==8)
  continue;
  printf("iics\n");
 }
 getch();
}