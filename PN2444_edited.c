//별 찍기 - 7
#include <stdio.h>

void printStar(int N, int ithOrder);
int main()
{
    int N = 0; //얘는 뭐라고 설명해야 하나 음..... 최대 크기의 *의 개수를 결정 짓는 N이라고 해야하나????????
    scanf("%d", &N);
    

    // 총 N번만큼 반복실행
    for(int i = 1; i <= N; i++)
    {
        printStar(N,i);
    }
    //총 N-1만큼 역순으로 실행 i--에 유의
    for(int i = N-1; i >= 1; i--)
    {
        printStar(N,i);
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