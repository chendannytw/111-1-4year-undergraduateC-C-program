#include <stdio.h>

unsigned long long int f(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("%s","Enter n: ");
	scanf("%u", &n);
	
	unsigned long long int result = f(n);
	printf("Fibonacci(%u) = %llu\n", n, result);
}

unsigned long long int f(unsigned int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else{
		return f(n - 1) + f(n - 2);
	}
}
