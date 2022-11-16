#include <stdio.h>
#define size1 5

void Bar(int);

int main(){
	int ar[size1] = {19,3,15,7,11 };
	printf_s("%s%13s%17s\n","Element","Value","Bar Chart");
	for (int i = 0; i < size1; i++) {
		printf_s("%7d%13d%8s",i,ar[i],"");
		Bar(ar[i]);
	}


}

void Bar(int n) {
	for (int i = 0; i < n; i++) {
		printf_s("*");
	}
	puts("");
}
