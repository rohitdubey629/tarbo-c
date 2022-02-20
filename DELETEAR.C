main(){
 int a[100],i,pos,size;
 clrscr();
 printf("Enter the arry size");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the delete position ");
 scanf("%d",&pos);
 for(i=size;i<=pos-1;i++)
 {
  a[i]=a[i+1];
 printf("%d ",a[i]);
 }

 getch();
}