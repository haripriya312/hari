#include<stdio.h>
int main()
{
int a,b,i,count;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d \t",i);
}
return 0;
}
