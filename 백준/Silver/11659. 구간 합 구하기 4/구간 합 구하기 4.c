#include <stdio.h>

int main(void)
{
    int N, M;
    int S[100001] = {0, }; 
    int num, a, b;
    
    scanf("%d %d", &N, &M);
    
    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &num);
        S[i] = S[i - 1] + num;
    }
    
    for(int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", S[b] - S[a - 1]); 
    }
    
    return 0;
}