#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[1000010];
    char *token;

    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    token = strtok(str, " ");
    while(token != NULL)
    {
        count++;
        printf("%s\n", token);
        token = strtok(NULL , " ");
    }
    printf("%d",count);
    return 0;
}