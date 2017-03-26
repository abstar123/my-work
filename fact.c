#include<stdio.h>
int main()
{
int n,i=1;
unsigned long int fact=1;
printf("enter any value");
scanf("%d",&n);
while(i<=n)
{
    fact=fact*i;
    i++;
}
printf("factorial of given no. is: %lu",fact);
return 0;
}
