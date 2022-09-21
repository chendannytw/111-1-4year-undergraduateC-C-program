#include <stdio.h>

int main(){
	int v1,v2, a1, t,asw;
	scanf_s("%d", &v1);
	scanf_s("%d", &a1);
	scanf_s("%d", &t);
	v2 = v1 + a1 * t;
	asw = v2 * t + a1 * t * t / 2;
	printf("%d", asw);
	return 0;
}
