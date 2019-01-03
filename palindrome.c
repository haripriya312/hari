#include<stdio.h>
#include<conio.h>
int main()
{
int num,rem,
printf("enter a number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(rev==num)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
