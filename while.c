#include<stdio.h>
main()
{
 int n,sum=0,rem;
 printf("enter a number\n");
 scanf("%d",&n);
 while(n>0)
  { 
   rem=n%10;
   sum=sum+rem;
   n=n/10;
  }
 printf("sum=%d\n",sum);
}

