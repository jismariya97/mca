#include<stdio.h>
main()
{
  int n,r,i;
  printf("enter the number which need to display table\n");
  scanf("%d",&n);
  printf("enter the range\n");
  scanf("%d",&r);
  for(i=1;i<r;i++)
     {
      printf("%d*%d=%d\n",n,i,n*i);
     }
}

