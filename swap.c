#include<stdio.h>
int main()
{
	int num1, num2, swap;
	printf("Enter two number : ");
	scanf("%d %d",&num1);
	swap=num1;
	num1=num2;
	num2=swap;
	printf(" %d %d",num1, num2);
	return 0;
}
