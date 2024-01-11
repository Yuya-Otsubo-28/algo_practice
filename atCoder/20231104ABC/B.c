#include <stdio.h>

long long power(long long a, long long b)
{
	long long res = 1;

	for (long long i = 0; i < b; i++)
		res *= a;
	return (res);
}

int main(void)
{
	long long b;
	long long p;

	scanf("%lld", &b);
	p = power(1, 1);
	for (long long i = 1; p <= b; i++) {
		if (p == b) {
			printf("%lld\n", i);
			return (0);
		}
		p = power(i + 1, i + 1);
	}
	printf("-1\n");

	return 0;
}