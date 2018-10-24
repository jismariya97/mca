#include<stdio.h>
main()
{
  int i,n,sum=0;
  printf("enter the limit\n");
  scanf("%d",&n);
  i=0;
  do
    {
     printf("%d\n",i);
     sum=sum+i;
     i++;
    }
  while(i<=n);
  printf("\nsum=%d",sum);
}   
