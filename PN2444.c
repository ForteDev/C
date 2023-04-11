//별 찍기 - 7
#include <stdio.h>

void printStar(int N, int ithOrder);
int main()
{
    int N = 0; //얘는 뭐라고 설명해야 하나 음..... 최대 크기의 *의 개수를 결정 짓는 N이라고 해야하나????????
    scanf("%d", &N);
    

    // 총 2N-1번만큼 반복실행
    for(int i = 1; i <= (N*2-1); i++)
    {
        if(i <= N)
        {
            // i가 N보다 작으면 printStar(N,i) 실행
            printStar(N,i);
        } else {
            // i가 N보다 크면 printStar(N,2N-1) 로 변칙 실행
            // i가 N보다 크면 역순으로 실행해야 해서 그렇다.
            // N이 5라면 1,2,3,4,5,4,3,2,1 순으로 대칭 실행
            printStar(N,(N*2-i));
        }
    }
    return 0;
}

void printStar(int N, int order)
{
    // 2*order-i만큼 공백찍기
    for(int i = 0; i < N - order; i++)
    {
        printf(" ");
    }
    //2*order-1 만큼 별찍기
    for(int i = 0; i < (order*2 - 1); i++)
    {
        printf("*");
    }
    //공백찍기 / 별찍기가 마쳐지면 개행하기
    printf("\n");
}