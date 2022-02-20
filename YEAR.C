/*main(){
 int year,team;
 clrscr();
 printf("Enter the year");
 scanf("%d",&year);
 team=year/100;
 if(year%100==0)
 {
  if(team%4==0)
  printf("%d is a leap year",year);
  else
  printf("%d is ordinary year",year);
 }
 else
 {
 if(year%4==0)
    printf("%d is a leap year",year);
    else
    printf("%d is ordinary year",year);
    }
   getch();
} */
main(){
 int year;
 clrscr();
 printf("Enter the year");
 scanf("%d",&year);
 if(year%4==0)
 printf("%d is a leap year",year);
 else
 printf("%d not leap year",year);
 getch();
}