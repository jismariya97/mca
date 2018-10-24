#include<stdio.h>
main()
{
int a,b,c;
printf("enter 3 nums");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is largest");
}
if(b>a && b>c)
{
printf("b is largest");
}
if(c>a && c>b)
{
printf("c is largest");
}
}



