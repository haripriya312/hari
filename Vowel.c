#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf(" enter any character:");
scanf("%c",&ch);
switch(ch)
{
case'A':
case'a':
case'E':
case'e':
case'I':
case'i':
case'O':
case'o':
case'U':
case'u':
printf("%c is vowel",ch);
break;
default:printf("%c is constonant",ch);
break;
}
return 0;
}
