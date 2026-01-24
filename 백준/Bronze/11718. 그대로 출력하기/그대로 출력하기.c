#include <stdio.h>

int main(void)
{
    char str[105];

    while (fgets(str, sizeof(str), stdin) != NULL)
    {
        printf("%s", str);
    }

    return 0;
}