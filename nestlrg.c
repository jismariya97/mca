#include<stdio.h>
main()
{
int a,b,c;
printf("enter 3 nums");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
  {
     if(a>c)
       {
        printf("a is large");
       }
     else
       { 
        printf("c is large");
       }
 }
else
   {
    if(b>c)
      {
        printf("b is large");
      }
    else
      {
        printf("c is large");
      }
   }
}
