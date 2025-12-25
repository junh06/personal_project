#include <stdio.h>

int main(void)
{
    int a, b, c;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }
        int max = (a > b) ? a : b;
        if(max == a)
        {
            max = (a > c) ? a : c;
            if(max == a)
            {
                if(max * max == b*b + c*c)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
            else if(max == c)
            {
                if(max * max == a*a + b*b)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
        }
        else if(max == b)
        {
            max = (b > c) ? b : c;
            if(max == b)
            {
                if(max * max == a*a + c*c)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
            else if(max == c)
            {
                if(max * max == a*a + b*b)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
        }
    }
    return 0;
}
