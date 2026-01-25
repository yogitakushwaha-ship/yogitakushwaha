#include<stdio.h>
int main()
{
float principal,rate,time,simple interest;
printf("Enter principal amount");
scanf("%f",& principal);
printf("enter rate of interest:");
scanf("%f",&rate);
printf("enter time(in year):");
scanf("%f",& time);
simple interest=(principal*rate*time)/100;
printf("simple interest=%2f\n",simple interest);
}
