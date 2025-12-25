#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    char arr[101];
    scanf("%s", arr);
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d", sum);
    return 0;
}