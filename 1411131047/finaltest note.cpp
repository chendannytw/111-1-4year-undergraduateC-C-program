#include <stdio.h>
#define SIZE 4
#define SIZEID 10

void sort(int a[][SIZE],const char**stuna);
void swap(int* ptr1, int* ptr2);
void printArray(int a[][SIZE],const char** name);

int main(void){
    int i;
    int a[SIZEID][SIZE] = {{2,98,72,0},
                        {3,76,32,0},
                        {6,98,67,0},
                        {7,89,32,0},
                        {8,98,55,0},
                        {9,89,32,0},
                        {10,98,65,0},
                        {11,99,32,0},
                        {12,98,71,0},
                        {13,76,91,0} };

    const char* name[SIZEID] = { "Alice","Bob","Cat","Dog","Eve","Fate","Google","Hello","Intel","Jackie" };
    printf_s("original data\n");
    for (i = 0; i < SIZEID; i++) a[i][3] = a[i][1] + a[i][2];

    printArray(a,name);
    sort(a,name);
    printf_s("sort data\n");
    printArray(a,name);   
}


void sort(int a[][SIZE],const char** stuna) {
    int i, j;
    const char *tempNa;
    for (i = 0; i < SIZEID; i++) {
        for (j = 1; j < SIZEID-i; j++) {
            if (a[j-1][3] < a[j][3]) {
                swap(&a[j - 1][0], &a[j][0]);
                swap(&a[j-1][1], &a[j][1]);
                swap(&a[j-1][2], &a[j][2]);
                swap(&a[j-1][3], &a[j][3]);
                tempNa = stuna[j-1];
                stuna[j - 1] = stuna[j];
                stuna[j] = tempNa;
            }
        }
    }
}

void swap(int* ptr1, int* ptr2) {//change ptr content
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArray(int a[][SIZE], const char** name) {
    for (int i = 0; i < SIZEID; i++) {
        printf_s("%-8s", name[i]);
        for (int j = 0; j < SIZE - 1; j++) printf_s("%4d", a[i][j]);
        printf_s("  %.1f", (float)a[i][3] / 2);
        puts("");
    }
}