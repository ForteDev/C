#include<stdio.h>

int main()
{
    char S[1005];
    int i = 0;

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c", S[i-1]);
    return 0;
}