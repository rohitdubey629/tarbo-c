void main(){
 int i,j,num,f=0,s;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 for(i=2;i<=num;i++){
   f=0;
  for(j=2;j<=i/2;j++){

   if(i%j==0){
    f=1;
    break;
    }
  }
//  if(f==0)
 // printf("prime number %d",i);
 scanf("%d",&s);
 if(j==s)
 printf("prime number %d",i);
 }
 getch();
}