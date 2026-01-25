#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a positive integer");
    scanf("%d",&n);
    if(n<0)
    {
      printf(factorial not defined for negative number\n");
    }
    else
    {
     for (i=1;i<=n;i++)
     {
         factorial*= i;
     }
      printf(factorial of %d= %llu\n",n,factorial);
    }




