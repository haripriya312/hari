#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXINPUT 20
int main()
{
    char input[MAXINPUT]="";
    int length,i; 
    printf("enter the string:");
    scanf("%s", input);
    length=strlen(input);
    for (i=0;i<length;i++)
        if(!isdigit(input[i]))
        {
            printf("no\n");
            exit(1);
        }
    printf("Yes\n");
    return 0;
}
