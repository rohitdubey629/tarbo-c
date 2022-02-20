main(){
 char s[3][10];
 int i;
 clrscr();
 printf("Enter the three number");
 for(i=0;i<=2;i++)
 gets(&s[i][0]);
 for(i=0;i<=2;i++)
 printf("%s\n",s[i]);
   getch();
}