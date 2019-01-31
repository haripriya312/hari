#include<stdio.h>
int main()
{
int a[10],i,n;
float m;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d i",a[i],i);
}
return 0;
}
