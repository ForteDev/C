#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    int len;

    char str[1000000];
    fgets(str,sizeof(str),stdin);
    len = strlen(str) + 1;

    for(int i = 0; i < len; i++)
    {   
        if(str[i+1] == '\0')
        {
            count++;
            break;
        } 
        else if(str[i+1] == ' ') 
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}