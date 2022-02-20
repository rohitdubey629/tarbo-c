main()
{
int a,b;
clrscr();
printf("decrement\n\n");
a=23;
b=a--;
printf("post decrement\n");

printf("a=%d\nb=%d",a,b);

a=23;
b=--a;
printf("\npre decrement");
printf("\na=%d\nb=%d",a,b);
printf("\n\nincrement\n\n");
a=23;
b=++a;
printf("pre increment");
printf("\na=%d\nb=%d",a,b);
a=23;
b=a++;
printf("\npost increment");
printf("\na=%d\nb=%d",a,b);
getch();
}
