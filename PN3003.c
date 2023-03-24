#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int white_pieces[6];
    int standard_pieces[6] = { 1, 1, 2, 2, 2, 8 };
    char input_nums[20];
    char* token;
    
    fgets(input_nums, sizeof(input_nums),stdin);
    
    token = strtok(input_nums, " ");

    for(int i = 0; i < 6; i++)
    {
        white_pieces[i] = atoi(token);
        printf("%d ", standard_pieces[i] - white_pieces[i]);
        token = strtok(NULL, " ");
    }


    return 0;
}