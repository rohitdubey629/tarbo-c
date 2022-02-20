main()
{
int age,sal;
clrscr();
printf("Enter the your age");
scanf("%d",&age);
if(age>=18)
{
printf("Enter youe sal");
scanf("%d",&sal);
if(sal>=2000)
{
printf("valid job");
}
else
printf("not valid job");
}
else
printf("not valid age");
getch();
}