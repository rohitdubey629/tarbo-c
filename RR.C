main()
{
float hindi,english,math,sience,art,total,averege;
clrscr();

printf("--total no. and averege--\n");
printf("hindi no.=");
scanf("%f",&hindi);
printf("english no.=");
scanf("%f",&english);
printf("math no.=");
scanf("%f",&math);
printf("sience no.=");
scanf("%f",&sience);
printf("art no.=");
scanf("%f",&art);
total=hindi+english+math+sience+art;
printf(" total no,=%f\n",total);
averege=(total)/5;
printf("everege =%f",averege);
getch();

}