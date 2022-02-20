main(){
 int i=1,f=1,num;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(i<=num)
 {
 f=f*i;
 i++;
  printf("factorial is %d\n",f);
 }
 getch();
}