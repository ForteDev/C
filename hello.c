#include <stdio.h>

int main(){
    const int ISBN_NUM = 91;
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    printf("The 1-3-sum is %d\n",(ISBN_NUM+a*1+b*3+c*1));

    return 0;
}