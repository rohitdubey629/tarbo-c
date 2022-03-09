int swap_cref();
void main (){
int *y,*x;
clrscr();
  /* printf("Enter two number");
   scanf("%d%d",&a,&b);
   printf("a %d b %d\n",a,b);
swap_cref(&a,&b); */
swap_cref();
 printf("Swap  =a %d b %d",*y ,*x);
 getch();
}
int swap_cref (){
 int tem,a,b,*y,*x;
 printf("Enter two number");
 scanf("%d%d",&a,&b);
 printf("a = %d b = %d\n",a,b);
 y=&a;
 x=&b;
 tem=*y;
 *y=*x;
 *x=tem;
 return *y,*x;
//printf("swap a = %d b = %d",*y,*x);
}