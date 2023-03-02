#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* mystrrev(char* str);

char* mystrrev(char*);p

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
<<<<<<< HEAD
    char* reversed_str = (char *)malloc(sizeof(char) * len);

=======
    char* reversed_str = (char *)malloc(sizeof(char)*len);
>>>>>>> 91efdd7a7723de2b97e5e9904b96c5d252230e71
    for(int i = 0; i < len; i++)
    {
        reversed_str[i] = str[len - 1 - i];
    }
    return reversed_str;
}