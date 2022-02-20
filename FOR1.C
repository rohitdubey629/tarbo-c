main(){
long int n,i,f=1;
clrscr();
printf("Print factor");
scanf("%ld",&n);
for(i=n;i>=1;i++)
{

f=f*i;
printf("%ld",f);
}
getch();
}