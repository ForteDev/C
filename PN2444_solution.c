//별 찍기 - 7
//모범 답안 
//함수명은 내가 멋대로 개명시키고 가독성있게 구조 변경

#include <stdio.h>

void printStar(int n, char c);

int main()
{
	int n; 
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
	{
		printStar(n-i, ' ');  //n-i번 공백 출력 
        printStar(2*i-1, '*'); //2i-1번 별 출력
        printf("\n"); //루프가 끝날때마다 개행
	}
	for(int i=n-1; i>=1; i--) // n-1부터 1이 될때까지 for문 실행 i--로 처리
	{
		printStar(n-i, ' ');
        printStar(2*i-1, '*'); 
        printf("\n");
	}

	return 0;
}

void printStar(int n, char c)
{
    // n번만큼 문자 c를 출력하는 구조
	for(int i=0; i<n; i++){
        printf("%c", c);
    } 
}