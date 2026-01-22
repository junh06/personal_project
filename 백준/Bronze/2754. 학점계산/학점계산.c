#include <stdio.h>

int main(void) 
{
    char grade[5];
    scanf("%s", grade);

    if (grade[0] == 'F') 
    {
        printf("0.0");
        return 0;
    }

    double score = 4.0 - (grade[0] - 'A');

    if (grade[1] == '+') score += 0.3;
    else if (grade[1] == '-') score -= 0.3;

    printf("%.1f", score);

    return 0;
}