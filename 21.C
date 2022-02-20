//write a c program to find power of a number using for loop.

main(){
 int 	i,base,num=1,last;
 clrscr();
 printf("Enter the base");
 scanf("%d",&base);
 printf("Enter the last");
 scanf("%d",&last);
 for(i=1;i<=last;i++)
 {
  num=num*base;
 }
 printf("%d ^ %d= %d",base,last,num);
 getch();
}