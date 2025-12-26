#include <stdio.h>

int main(void)
{
	int N;
	int size[6];
	int t, p;
	int a = 0;
	int b, c;
	
	scanf("%d", &N);
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &size[i]);
	}
	scanf("%d %d", &t, &p);
	for(int i = 0; i < 6; i++)
	{
		a += size[i] / t;
		if(size[i] % t != 0)
		{
			a++;
		}
	}
	
	b = N / p;
	c = N % p;
	
	printf("%d\n", a);
	printf("%d %d", b, c);
	return 0;
}