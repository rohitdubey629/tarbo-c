void main(){
int n;
clrscr();
printf("Enter any no.");
scanf("%d",&n);
if(n>10)
{
n=n+5;
printf("n=%d",n);
}
else
{
n=n-5;
printf("n=%d",n);
}
getch();
}