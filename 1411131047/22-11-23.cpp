#include<stdio.h>
#define SIZE 10

void printAry(int ar[]);
void sortAry(int ar1[], int ar2[]);
int findAry(int n,int ar3[]);

int main() {
	int stuN[SIZE] = { 12,13,14,15,16,17,19,21,22,23 }, Sco[SIZE]={ 66,67,66,70,73,74,75,75,62,32 },i,temp,j;
	//Q1
	puts("Origin");
	printAry(stuN);
	printAry(Sco);
	puts("");
	
	sortAry(stuN, Sco);
	puts("Sort");
	printAry(stuN);
	printAry(Sco);
	puts("");
	//Q2
	int d;
	scanf_s("%d", &d);
	d=findAry(d, stuN);
	if (d < 0) printf_s("not found!");
	else printf_s("%d", Sco[d]);

}

void printAry(int ar[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf_s("%2d ", ar[i]);
	}
	puts("");
}

void sortAry(int ar1[], int ar2[]) {
	int i, j,temp;
	for (i = 0; i < SIZE; i++) {
		for (j = 1; j < SIZE - i; j++) {
			if (ar2[j] < ar2[j - 1]) {
				temp = ar2[j];
				ar2[j] = ar2[j - 1];
				ar2[j - 1] = temp;
				temp = ar1[j];
				ar1[j] = ar1[j - 1];
				ar1[j - 1] = temp;
			}
		}
	}
}

int findAry(int n,int ar3[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		if (ar3[i] == n) {
			return i;
		}
	}
	return -1;
}
