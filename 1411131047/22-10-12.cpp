#include<stdio.h>
#include<math.h>

int facto(int);
double expo(int);
int power(int, int);

int main(void)
{
	printf("expo\n");
	expo(10);
	printf("power\n");
	printf_s("%d\n", power(2, 4));
}


int facto(int y) 
{
	int a1=1;
	for (int i = 1; i <= y; ++i) {
		a1 *= i;
	}
	return a1;
}

double expo(int x) {
	double x1 = 1;
	for (int j = 1; j <= x; ++j) {
		x1 += 1.0/facto(j);
		printf_s("%lf\n", x1);
	}
	return x1;
}

int power(int x, int y) {
	int asw=1;
	for (int i = 1; i <= y; ++i) {
		asw *= x;
	}
	return asw;
}