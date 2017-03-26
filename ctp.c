#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
float r,s;
printf("enter cartesian coordinates of a point:");
scanf("%d %d",&a,&b);
r=sqrt(a*a+b*b);
s=tan(b/a);
printf("polar coordinates are:%.1f %.2f",r,s);
}
