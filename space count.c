#include<stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\nthe number of space in the line are:%d",count);
	return 0;
}
