#include<stdio.h>
main()
{
int y,s,t;
printf("enter a year");
scanf("%d",&y);
s=y%4;
t=y%100;
if((s==0)||(t==0)||(y%400==0))
{
printf("year is leap");
}
else
{
printf("year is not leap");
}
}

