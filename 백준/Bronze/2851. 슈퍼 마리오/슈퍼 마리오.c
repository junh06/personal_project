#include <stdio.h>

int main(void)
{
    int mush[10];
    int sum = 0;
    int temp = 0;
    
    for(int i = 0; i< 10; i++)
    {
        scanf("%d", &mush[i]);
        temp = sum;
        sum += mush[i];
        if(sum >= 100)
        {
            if(sum - 100 <= 100 - temp)
            {
                printf("%d", sum);
            }
            else
            {
                printf("%d", temp);
            }
            return 0;
        }
    }
    printf("%d", sum);
    return 0;
}