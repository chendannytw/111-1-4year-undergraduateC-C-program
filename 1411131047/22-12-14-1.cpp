#include <stdio.h>
#define SIZE 4
#define SIZEID 10

void swap(int* e1Ptr, int* e2Ptr);
void sort(int a[][SIZE]);
void printAry(int ar[]);
double total(int TAry[][SIZE]);

int main(void)
{
    int key, result = 0, i, j;
    // initialize a
    int a[SIZEID][SIZE] = { {2,98,72,0},
                        {3,76,32,0},
                        {6,98,67,0},
                        {7,89,32,0},
                        {8,98,55,0},
                        {9,89,32,0},
                        {10,98,65,0},
                        {11,99,32,0},
                        {12,98,71,0},
                        {13,76,91,0}};

    puts("Data items in original order");
    
    for (j = 0; j < 10; j++)
    {
        for (i = 1; i < SIZE - 1; ++i) {
            a[j][3] += a[j][i];
        }
    }
    for (j = 0; j < 10; j++) printAry(a[j]);
    
    sort(a);
    puts("\nData items in ascending order");

    for (j = 0; j < 10; j++) printAry(a[j]);

    printf_s("Max:NO.%d %d  Min:NO.%d %d \n", a[0][0],  a[0][3],a[SIZEID - 1][0], a[SIZEID-1][3]);
    int mid = SIZEID / 2;
    double avg = total(a);
    printf("Avg:%.2lf  ", avg);
    printf("mid:%d\n", a[mid][3]);
  
}


void sort(int a[][SIZE])
{
    int hold, pass, i;
    for (pass = 1; pass < SIZEID; ++pass) {
        for (i = 0; i < SIZEID - pass; ++i) {

            if (a[i][3] < a[i + 1][3]) {
                swap(&a[i][0], &a[i + 1][0]);
                swap(&a[i][1], &a[i + 1][1]);
                swap(&a[i][2], &a[i + 1][2]);
                swap(&a[i][3], &a[i + 1][3]);
            }
        }
    }
}

void swap(int* e1Ptr, int* e2Ptr)
{
    int hold;
    hold = *e1Ptr;
    *e1Ptr = *e2Ptr;
    *e2Ptr = hold;
}

void printAry(int ar[]) {
    int i;
    for (i = 0; i < SIZE; i++) printf("%4d ", ar[i]);
    puts("");
}

double total(int TAry[SIZEID][SIZE]) {
    int i;
    double tal = 0;
    for (i = 0; i < SIZEID; i++) tal+= TAry[i][3];
    return tal / SIZEID / 2;
}