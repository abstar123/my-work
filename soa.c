#include<stdio.h>
#include<math.h>
int main()
{
    double x=60,b,c,d,e,f;
    b=sin(x);
    c=cos(x);
    printf("value of sin(%.1f) and cos(%.1f) is:%.8f and %.8f",x,x,b,c);
    e=pow(b,2);
    f=pow(c,2);
    printf("\nsin^2(%.1f)+cos^2(%.1f)=>%.8f+%.8f=",x,x,e,f);
    d=e+f;
    printf("%.8f",d);
    return 0;
}
