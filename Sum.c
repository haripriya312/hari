#include<stdio.h>
#include<conio.h>
int main()
{
int n, i=1, sum=0;
printf(" enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i=i+1;
}
printf("sum=%d",sum);
return 0;
}
