			main(){

int i,j,k,num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
k=0;
 for(j=1;j<i;j++)
 {
   if(i%j==0)
    {
     k=k+j;
    }
 }
 if(k==i)
 {
 printf("%d ",k);
 }
}
 getch();

}