#include<stdio.h>
int main()
{
int a;
printf("\nenter any number:");
scanf("%d",&a);
if(a<=0)
printf("it's absolute value is:%d",-a);
else
printf("it's absolute value is:%d",a);
main();
return 0;
}
