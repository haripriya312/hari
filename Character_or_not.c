#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter a character:");
scanf("% c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
{
 switch(ch)
 {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
     printf("%c is a vowel",ch);
     break;
   default:printf("%c is consonant",ch);
     break;
  }
}
else
{
printf("Invalid Input");
}
return 0;
}
