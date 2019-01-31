#include<stdio.h>
int main()
{
int n,arr[n],i,min;
printf("enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[n]);
}
min=arr[0];
	for(i=1;i<n;i++)
	{
	if(min>arr[i])
	{
		min=arr[i];
	}
	}
	printf("%d",min);	
return 0;
}
