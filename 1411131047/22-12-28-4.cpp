#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>

int upper(char* str);
int lower(char* str);
int num(char* str);

int main(void)
{
	char word[] = "HEllo world 1411131047 test";
	int (*f[3])(char* str) = { upper,lower,num},A;
	for (int i = 0; i < 3; i++) {
		A = (*f[i])(word);
		printf_s("%d,", A);
	}
}
   

int upper(char* str)
{
	int upr = 0;
	while (*str != '\0')
	{
		if (isupper(*str)) {
			upr++;
		}
		str++;
	}
	return upr;

}

int lower(char* str)
{
	int low = 0;
	while (*str != '\0')
	{
		if (islower(*str)) {
			low++;
		}
		str++;
	}
	return low;
  
}

int num(char* str)
{
	int numb = 0;
	while (*str != '\0')
	{
		if (isdigit(*str)) {
			numb++;
		}
		str++;
	}
	return numb;
}