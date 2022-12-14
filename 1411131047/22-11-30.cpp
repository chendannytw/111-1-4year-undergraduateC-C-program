#include<stdio.h>
#define SIZE 20

void printAry(int ar[]);
void sortAry(int ar1[], int ar2[]);
int search1(int Ary[SIZE],int data1);
double total(int TAry[SIZE]);

int main() {
	int idx, data,mid;
	double avg;
	int stuN[SIZE] = { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 }, Sco[SIZE] = { 66,67,63,70,73,74,78,75,62,32,44,46,27,12,80,64,61,90,11,60 };
	sortAry(stuN, Sco);
	printf("All student ID: \n");
	printAry(stuN);
	printf("All score: \n");
	printAry(Sco);
	mid = SIZE / 2;
	avg = total(Sco) /SIZE;
	printf("Avg:%.2lf  ", avg);
	printf("mid:%d\n", Sco[mid]);
	printf("Score: ");
	scanf_s("%d", &data);
	idx=search1(Sco,data);
	if (idx==-1) printf("Not found");
	else {
		printf("Student ID: %d  ", stuN[idx]);
		printf("Rank: %d",20-idx);		
	}
}

int search1(int Ary[SIZE],int data1) {
	int idx1,LL=0,RR=SIZE-1;                     //LL=left edge,RR=right edge
	while (RR >= LL) {
		int idx1 = (LL + RR) / 2;
		if (Ary[idx1] == data1) return idx1;
		else if (Ary[idx1] > data1) RR = idx1 - 1;
		else if (Ary[idx1] < data1) LL = idx1 + 1;
	}
	return -1;
}

void printAry(int ar[]) {
	int i;
	for (i = 0; i < SIZE; i++) printf("%2d ", ar[i]);
	puts("");
}

void sortAry(int ar1[], int ar2[]) {
	int i, j, temp;
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

double total(int TAry[SIZE]) {
	int i, tal=0;
	for (i = 0; i < SIZE; i++) tal += TAry[i];
	return tal;
}