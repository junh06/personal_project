#include <stdio.h>

int main(void)
{
    int N;
    int num;
    int count = 0;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(num == 1)
        {
            continue;
        }
        int is_prime = 1; // 1이면 소수, 0이면 소수 아님
        for(int j = 2; j < num; j++)
        {
            if(num % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}