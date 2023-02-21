#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[1000000];
    char *token;

    fgets(str,sizeof(str),stdin);

    // printf("the last charater of str is %c\n",str[strlen(str)-2]);
    str[strlen(str)-1] = '\0';
    // if(str[strlen(str)-1] == ' ')
    // {
    //     count--;
    // }

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