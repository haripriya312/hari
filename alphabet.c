#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("INPUT\n");
scanf("%d",&c);
if(c>='a'&&c<='z')
{
printf("Alphabet");
}
else
{
printf("No");
}
getch();
}
