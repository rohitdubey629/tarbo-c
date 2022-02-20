main(){

int i=1,j,k=0,num,t;
clrscr();
printf("Enter the number");
scanf("%d",&num);
i=1;
t=num;
while(i<num)

{
if(num%i==0)
 k=k+i;
 i++;
}
 if(k==num)
 printf("Perfect number %d",num);
 else
 printf("Not Perfect number %d",num);
 getch();

}