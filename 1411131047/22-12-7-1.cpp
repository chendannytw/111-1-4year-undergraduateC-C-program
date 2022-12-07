#include<stdio.h>
#define SIZE 10
#define SIZE1 2

void SWAP(int* Ptr1, int* Ptr2);
void printAry(int ar[]);

int main() {
	int* countPtr = NULL, * countPtr2 = NULL, i, j;
	int stuN[SIZE1][SIZE] = { {12,13,14,15,16,17,19,21,22,23 }, { 66,67,66,70,73,74,75,75,62,32 } };
	printAry(stuN[0]);
	printAry(stuN[1]);
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - i; j++) {
			if (stuN[1][j] < stuN[1][j + 1]) {
				SWAP(&stuN[1][j], &stuN[1][j + 1]);
				SWAP(&stuN[0][j], &stuN[0][j + 1]);
			}
		}
	}
	printAry(stuN[0]);
	printAry(stuN[1]);


}


void SWAP(int* cPtr, int* cPtr1) {
	int temp;
	temp = *cPtr;
	*cPtr = *cPtr1;
	*cPtr1 = temp;
}

void printAry(int ar[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf_s("%2d ", ar[i]);
	}
	puts("");
}