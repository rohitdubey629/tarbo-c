main(){
 int i=1,sum=0,num;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(i<=num/2)
 {
    if(num%i==0)
    sum=sum+i;
    i++;
    }
    if(sum==num)
    printf("perfect number");
    else
    printf("not perfrct number");

 getch();
}