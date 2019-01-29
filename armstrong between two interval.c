#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp,num,rem;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
 {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
  }
