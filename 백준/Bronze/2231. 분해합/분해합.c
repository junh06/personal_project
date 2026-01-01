#include <stdio.h>

int main(void)
{
	int N;
	int result = 0; // 생성자를 못 찾았을 경우
	scanf("%d", &N);
	
	for(int i = 1; i < N; i++)
	{
		int sum = i;
		int temp = i;
		while(temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if(sum == N)
		{
			result = i;
			break;
		}
	}
	
	printf("%d", result);
	return 0;
	
}