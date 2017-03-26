#include<stdio.h>
int main()
{
long int totaldays,normaldays;
int yr,leapdays,firstday;
printf("\nenter any year:");
scanf("%d",&yr);
normaldays=(yr-1)*365;
leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
totaldays=normaldays+leapdays;
firstday=totaldays%7;
if(firstday==0)
printf("it's monday on first of january");
if(firstday==1)
printf("it's tuesday on first of january");
if(firstday==2)
printf("it's wednesday on first of january");
if(firstday==3)
printf("it's thursday on first of january");
if(firstday==4)
printf("it's friday on first of january");
if(firstday==5)
printf("it's saturday on first of january");
if(firstday==6)
printf("it's sunday on first of january");
main();
return 0;
}
