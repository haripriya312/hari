#include <stdio.h>
int main()
{
    int i ,k;
    printf("enter two values:");
    scanf("%d %d",&i,&k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("%d %d", i, k);
    return 0;
}
