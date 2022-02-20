main(){
 int x,i;
 clrscr();
 printf("Enter the number");
 scanf("%d",&x);
 for(i=2;x>1;i++)
   if(x%i==0)
 {
   printf("%d ",i);
   x=x/i;

 }
 getch();
}