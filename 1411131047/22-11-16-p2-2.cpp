#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

void fre(int R[], int F[], int, int);


int main() {
	int ar[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,5, 6, 7, 5, 6, 4, 8, 6, 8, 10 }, rat[FREQUENCY_SIZE] = { 0 }, i;
	printf_s("%s%17s\n", "Rating", "Frequency");
	fre(ar, rat, RESPONSES_SIZE, FREQUENCY_SIZE);
}

void fre(int R[], int F[], int RSize, int FSize) {
	int i,j;
	for (i = 0; i < RSize; i++) {
		F[R[i]] += 1;
	}
	for (i = 1; i < FSize; i++) {
		printf_s("%6d%17d%4s", i, F[i],"");
		for (j = 0; j < F[i]; j++) {
			printf_s("*");
		}
		puts("");
	}
}
