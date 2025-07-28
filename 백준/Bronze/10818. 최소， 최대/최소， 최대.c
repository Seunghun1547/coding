#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *array = malloc(N * sizeof(int));
    int *pa = array;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", pa++);
    }
    pa = array;
    int max = *pa;
    int min = *pa;
    for(int i = 0; i < N; i++)
    {
        if(*pa > max)
        {
            max = *pa;
        }
        if(*pa < min)
        {
            min = *pa;
        }
        pa++;
    }
    printf("%d %d", min, max);
    free(array);
    return 0;
}