// 바구니 순서 바꾸기
#include <stdio.h>
void rotateBaskets(int*,int,int,int,int);
void rotateBaskets1(int*,int,int,int,int);

int main()
{
    int N, M;
    scanf("%d %d",&N, &M);

    int arr[N];
    for(int i = 0; i < N; i++)
    {
        arr[i] = i+1;
    }
    printf("sizeof(arr) in main: %d\n",sizeof(arr));

    for(int times = 0; times < M; times++)
    {
        int i, j, k;
        scanf("%d %d %d",&i, &j, &k);
        rotateBaskets1(arr, N, i-1, j-1, k-1);
    }
    for(int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


void rotateBaskets(int* arr,int arrLen, int begin,int end,int mid)
{
    int tmpArr[arrLen];

    for(int i = mid; i <= end; i++)
    {
        tmpArr[i] = arr[i-mid+begin];
    }
    for(int i = begin; i <= mid-1; i++)
    {
        tmpArr[i] = arr[i+end-mid+1];
    }
    for(int i = begin; i <= end; i++)
    {
        arr[i] = tmpArr[i];
    }
    
}
void rotateBaskets1(int* arr, int arrLen, int begin, int end, int mid)
{
    int tmpArr[arrLen];
    for (int i = 0; i < arrLen; i++) 
    {
        tmpArr[i] = 0; // tmpArr 배열 초기화
    }
    for(int i = begin; i <= mid-1; i++)  // 수정한 부분
    {
        tmpArr[i] = arr[i+end-mid+1];
    }
    for(int i = mid; i <= end; i++)
    {
        tmpArr[i] = arr[i-mid+begin];
    }
    for(int i = begin; i <= end; i++)
    {
        arr[i] = tmpArr[i];
    }
}
