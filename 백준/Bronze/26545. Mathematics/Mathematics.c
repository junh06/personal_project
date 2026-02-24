#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("%d", sum);
    return 0;
}