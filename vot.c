#include<stdio.h>
int main()
{
int a,b,c;
printf("\nenter three angles of a triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180)
printf("a valid triangle.");
else
printf("not a valid triangle.");
main();
return 0;
}
