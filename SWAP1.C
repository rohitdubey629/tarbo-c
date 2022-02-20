void main(){
int a,b;
clrscr();
printf("Enter the number");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap a=%d and b=%d",a,b);
getch();
}