main(){
 int num,i=1;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(i<num)
 {
  if(num%i==0)
  printf("%d ",i);
  i++;
 }
 getch();
}