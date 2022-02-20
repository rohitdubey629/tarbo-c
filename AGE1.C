main()
{
int age;
clrscr();
printf("Enter the your age");
scanf("%d",&age);
printf("you have entered%d as your age\n",age);
if(age>=18)
{
printf("have you vote");
}
else if(age>10)
{
printf("you have enter you are vote for kids") ;
}

else
{
printf("you canot vote");
}
printf("%d",age);
getch();
}