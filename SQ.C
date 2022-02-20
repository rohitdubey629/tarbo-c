main(){
int p,r,t,si;
clrscr();
printf("Enter sum number");
scanf("%d%d%d",&p,&r,&t);
si=(p*r*t)%100;
printf("%d",si);
getch();
}