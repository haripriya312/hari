#include<stdio.h>
#include<conio.h>
int main()
{
int I,n,k,arr[100],sum=0;
printf("enter two numbers:");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
for(i=0;i<n;i++)
  {
  sum+=arr[i];
  }
printf("%d",sum);
return 0;
}
