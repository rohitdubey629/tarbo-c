
main(){
 int i,j,s;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
   {
     if(i==2||i==3||i==4)
       {
	if(j==2||j==3||j==4)
	 printf(" ");
	 else
	 printf(" * ");
       }
       else
	 printf(" * ");
    }
  printf("\n");
 }
 getch();
}