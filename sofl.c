#include<stdio.h>
void main()
{
unsigned long int a,r;
printf("enter a number:");
scanf("%lu",&a);
r=a%10;
a=a/1000;
printf("sum of first and last digit is: %lu",r+a);
}
