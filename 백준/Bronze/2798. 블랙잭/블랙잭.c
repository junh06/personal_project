#include <stdio.h>

int main(void)
{
	int N;
	int M;
	int cards[100];
	int result = 0; // M을 넘지 않는 가장 큰 합을 저장할 변수
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &cards[i]);
	}
	for(int i = 0; i < N; i++) // first card
	{
		for(int j = i + 1; j < N; j++) // second card
		{
			for(int k = j + 1; k < N; k++) // third card
			{
				int sum = cards[i] + cards[j] + cards[k];
				if(sum <= M && sum > result)
				{
					result = sum;
				}
			}
		}
	}
	printf("%d", result);
	
	return 0;
}