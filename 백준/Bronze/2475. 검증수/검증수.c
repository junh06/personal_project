#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int veri;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    veri = (a*a + b*b + c*c + d*d + e*e) % 10;
    printf("%d", veri);
    return 0;
}