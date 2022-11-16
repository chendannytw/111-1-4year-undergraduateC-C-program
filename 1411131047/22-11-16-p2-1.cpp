void fre(int R[], int F[],int);


int main() {
	int ar[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,5, 6, 7, 5, 6, 4, 8, 6, 8, 10 }, rat[FREQUENCY_SIZE] = {0}, i;
	printf_s("%s%17s\n", "Rating", "Frequency");

	for (i = 0; i < RESPONSES_SIZE; i++) {
		rat[ar[i]] += 1;
	}

	for (i = 1; i < FREQUENCY_SIZE; i++) {
		printf_s("%6d%17d\n", i, rat[i]);
	}
}
