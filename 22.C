//write a cprogram to find all factors of a number.

main(){
 int i,num,f;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 printf("Factore of: %d\n",num);
 for(i=1;i<=num;i++)
 {
  if(num%i==0)
  printf("%d , ",i);
 }
 getch();
}