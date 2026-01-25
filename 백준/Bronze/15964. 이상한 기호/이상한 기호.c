#include <stdio.h>

int main(void)
{
    int A, B;
    int result;
    scanf("%d %d", &A, &B);
    result = (A+B)*(A-B);
    printf("%d", result);
    return 0;
}