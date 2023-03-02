#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* mystrrev(char* str);

int main()
{
    char A[10], B[10];

    scanf("%s %s", A, B);

    char* revA = mystrrev(A);
    char* revB = mystrrev(B);

    int num1, num2;
    num1 = atoi(revA);
    num2 = atoi(revB);

    if(num1 > num2)
    {
        printf("%d", num1);
    } else {
        printf("%d", num2);
    }
    return 0;
}

char* mystrrev(char* str)
    {
    int len = strlen(str);
    char* reversed_str = (char *)malloc(sizeof(char) * len);

    for(int i = 0; i < len; i++)
    {
        reversed_str[i] = str[len - 1 - i];
    }
    return reversed_str;
}