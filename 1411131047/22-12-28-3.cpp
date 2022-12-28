#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char s1[] = "abc2.34ababc3.8gh4.4xyz";
	char*s1Ptr = &s1[0];
	while (*s1Ptr != '\0')
	{
		if (isdigit(*s1Ptr)) {
			double d = strtod(s1Ptr, &s1Ptr);
			printf("%.2f ,",d);
		}
		else s1Ptr++;
	}
}