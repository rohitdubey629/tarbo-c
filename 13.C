main(){
 int num,r,swip=0;
 clrscr();
scanf("%d",&num);
 while(num>=1)
 {
  r=num%10;
  num=num/10;
  swip=swip*10+r;
 }
printf("%d",swip);
 getch();
}