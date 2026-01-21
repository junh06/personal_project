#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char str[101];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isupper(str[i])) 
        {
            printf("%c", tolower(str[i]));
        } 
        else 
        {
            printf("%c", toupper(str[i]));
        }
    }

    return 0;
}