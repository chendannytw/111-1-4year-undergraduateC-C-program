#include <stdio.h>
#include <ctype.h>

int main(){
	char s1[10] = "Hello",word;
	int upr=0, low=0,i=0;
	while (s1[i]!='\0')
	{
		if (islower(s1[i])) {
			low++;
			word=toupper(s1[i]);
		}
		if (isupper(s1[i])) {
			upr++;
			word = tolower(s1[i]);
		}
		printf_s("%c",word);  
		i++;
	}

	printf_s("\nupper:%d,lower:%d", upr, low);
}