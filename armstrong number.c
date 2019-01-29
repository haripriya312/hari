#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,temp,num,rem;
printf("enter a number:");
scanf("%d",&a);
temp=i;
sum=0;
for(i=0;temp!=0;i++)
 {
     rem=(temp%10);
     num+=rem*rem*rem;
     temp/=10;
 }
  if(i==num)
     printf("yes");
  else
     printf("no");
  return 0;
  }
