#include<stdio.h>
int main()
{
int age;
char sex,ms;
printf("enter age,sex and marital status:");
scanf("%d %c %c",&age,&sex,&ms);
if((ms=='m')||(ms=='u'&&sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
printf("Driver is insured.");
else
printf("Driver is not insured.");
return 0;
}
