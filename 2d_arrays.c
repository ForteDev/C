#include <stdio.h>

int main(){
    int x,y;
    int num_of_cases;
    int point_var;
    scanf("%d", &num_of_cases);
    int arr[10][10] = {};

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &point_var);
            arr[i][j] = point_var;
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    return 0;
}
