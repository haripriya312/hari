#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("INPUT\n");
scanf("%d",&a);
if(a>=0)
{
printf("Positive");
}
else if(a<=0)
{
printf("Negative");
}
else
{
printf("Zero");
}
getch();
}
