#include<stdio.h>
int main()
{
int a;
printf("\nenter any year:");
scanf("%d",&a);
(a%4==0)?printf("%d is a leap year",a):printf("%d is not a leap year",a);
main();
return 0;
}
