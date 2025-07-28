#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    // 정수 N 받기
    int N;
    scanf("%d", &N);

    //
    int num[101] = {0, };
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &num[i]);
    }
    int v;
    int count = 0;
    scanf("%d", &v);
    for (int i = 0; i < N; i++)
    {
        if (v == num[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}