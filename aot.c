#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,sum=0,p;
printf("enter three sides of a triangle:");
scanf("%f %f %f",&a,&b,&c);
p=(a+b+c)/2;
sum=sqrt(p*(p-a)*(p-b)*(p-c));
printf("area of the given triangle is:%.2f",sum);
}
