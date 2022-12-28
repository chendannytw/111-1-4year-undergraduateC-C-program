#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char s1[10] = "ABABEABDt", s2[3] = "AB";
	int i, time=0;
	for (i=0; i < 7; i++) {
		if (strncmp(s2, s1+ i, 2) == 0) time++;
	}
	printf_s("%d", time);
}