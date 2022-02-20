#inklude<stdio.h>
int main()
{
int age;
printf("enter your age\n");
scanf("%d",&age);
printf("you have enterd%d as your age\n",age);
if(age>=18){
printf("you can vote!");}
else if(age>=10){
printf("you are betwin 10 to 18 and you can vote! for kids");}
else if (age>=3){
printf("you between 3 to 10 and you can vote for babies");}
else{
print("you canot vote!");}
return 0;
}
