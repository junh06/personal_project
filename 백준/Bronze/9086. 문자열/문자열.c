#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    char str[10][1005];
    
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%s", str[i]);
    }
    for(int j = 0; j < T; j++)
    {
        int len = strlen(str[j]);
        printf("%c%c\n", str[j][0], str[j][len - 1]);
    }
    return 0;
}