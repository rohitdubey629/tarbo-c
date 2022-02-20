main(){
 int i,num1,num2;
 clrscr();
 printf("Enter the first number");
 scanf("%d",&num1);
 printf("Enter the second number");
 scanf("%d",&num2);
// for(i=num2;i>=num1;i--) testing
while(num2>=num1)
 {
  printf("natural number %d\n",num2);
  num2--;
 }
// printf("\n");
 getch();
}