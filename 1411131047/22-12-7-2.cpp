#include<stdio.h>
#define SIZE 20
#define SIZE1 4

void printAry(int ar[]);
void sortAry(int ar1[],int ar2[]);
double total(int TAry[SIZE]);
void SWAP(int* Ptr1, int* Ptr2);

int main() {
	int mid,toa;
	double avg;
	int stuN[SIZE1][SIZE] = { { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37},{ 66,67,63,70,73,74,78,75,62,32,44,46,27,12,80,64,61,90,11,60 },{74,78,75,62,32,44,46,27,12,80,64,61,90,11,60,66,67,63,70,73},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
	printf_s("RANK:\n 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20\n");
	for (int i = 0; i < SIZE; i++) stuN[3][i] = stuN[1][i] + stuN[2][i];
	sortAry(stuN[0],stuN[3]);
	printf("All student ID: \n");
	printAry(stuN[0]);
	printf_s("All student Total Score: \n");
	printAry(stuN[3]);
	printf_s("All Class Score: \n");
	toa = total(stuN[3]);
	printf_s("%d\n", toa);
	printf_s("Max:NO.%d %d  Min:NO.%d %d \n", stuN[0][0], stuN[3][0], stuN[0][SIZE-1], stuN[3][SIZE - 1]);
	mid = SIZE / 2;
	avg = total(stuN[3]) / SIZE;
	printf("Avg:%.2lf  ", avg);
	printf("mid:%d\n", stuN[3][mid]);

}

void printAry(int ar[]){
	int i;
	for (i = 0; i < SIZE; i++) printf("%2d ", ar[i]);
	puts("");
}

void sortAry(int ar1[], int ar2[]) {
	int i, j, temp;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - i; j++) {
			if (ar2[j] < ar2[j +1]) {
				SWAP(&ar2[j], &ar2[j + 1]);
				SWAP(&ar1[j], &ar1[j + 1]);
			}
		}
	}
}

double total(int TAry[SIZE]) {
	int i, tal = 0;
	for (i = 0; i < SIZE; i++) tal += TAry[i];
	return tal;
}

void SWAP(int* cPtr, int* cPtr1) {
	int temp;
	temp = *cPtr;
	*cPtr = *cPtr1;
	*cPtr1 = temp;
}



