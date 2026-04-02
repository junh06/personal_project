#include <stdio.h>

int main(void)
{
    int N, K;
    int arr[101];
    int max = -10000;

    scanf("%d %d", &N, &K);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= N - K; i++)
    {
        int sum = 0;

        for(int j = 0; j < K; j++)
        {
            sum += arr[i + j];
        }

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("%d\n", max);
    return 0;
}