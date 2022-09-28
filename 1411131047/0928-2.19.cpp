#include <stdio.h>

int main() {
	int a, b, c,asw,sm,la ;

	printf_s("Enter three different inttegers: ");
	scanf_s(" %d %d %d", &a, &b, &c);
	
	asw = a + b + c;
	printf_s("Sum is %d\n", asw);
	
	asw =asw/3 ;
	printf_s("Average is %d\n", asw);
	
	asw = a * b * c;
	printf_s("Product is %d\n", asw);
	
	sm = a;
	la = b;
	if (b < a) {
		sm = b;
		la = a; 
	}
	if (c < sm) {
		sm = c;
	}
	if (c > la) {
		la = c;
	}
	printf_s("Smallest is %d\n", sm);
	printf_s("Largest is %d\n", la);

	return 0;
}