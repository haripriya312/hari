#include<stdio.h>
int main()
{
int a,b,i;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2==0)
{
printf("%d \t",i);
}
return 0;
}
