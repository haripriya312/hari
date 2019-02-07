#include<stdio.h>
int main()
{
int n,hour,minute;
printf("enter time :");
scanf("%d",&n);
hour=n/60;
minute=n%60;
printf("the hour and min is %d %d",hour,minute);
return 0;
}
