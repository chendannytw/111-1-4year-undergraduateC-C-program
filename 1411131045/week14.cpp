// week14.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <stdio.h>
#define STUDENT 10
#define SIZE 5
void sort(int a[][SIZE], int size);
void swap(int* e1Ptr, int* e2Ptr);
void mid(int a[][SIZE], int size);
int main(void)
{
    int result = 0, i, j;
    int a[STUDENT][SIZE] ={ {2,98,72,0,0},
                        {3,76,32,0,0},
                        {6,98,67,0,0},
                        {7,89,32,0,0},
                        {8,98,55,0,0},
                        {9,89,32,0,0},
                        {10,98,65,0,0},
                        {11,99,32,0,0},
                        {12,98,71,0,0},
                        {13,76,91,0,0}, };

    puts("Data items in original order");

    for (j = 0; j < 10; j++)
    {
        for (i = 1; i < SIZE - 1; ++i) {
            a[j][3] += a[j][i-1];
            a[j][4] = a[j][3] / 2;
        }
    }

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }

             

    sort(a, STUDENT);
    puts("\nData items in ascending order");

    for (j = 0; j < 10; j++)
    {
        printf("[%d]", j + 1);
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }
    mid(a,STUDENT);
}


void sort(int a[][SIZE], int size)
{
    int hold, pass, i;
    for (pass = 1; pass < size; ++pass) {
        for (i = 0; i < size - pass; ++i) {
 
            if (a[i][3] < a[i + 1][3]) {
                swap(&a[i][0], &a[i + 1][0]);
                swap(&a[i][1], &a[i + 1][1]);
                swap(&a[i][2], &a[i + 1][2]);
                swap(&a[i][3], &a[i + 1][3]);
                swap(&a[i][4], &a[i + 1][4]);
            }
        }
    }

}

void swap(int *e1Ptr, int *e2Ptr)
{
    int hold;
    hold = *e1Ptr;
    *e1Ptr = *e2Ptr;
    *e2Ptr = hold;
}
void mid(int a[][SIZE], int size)
{
    int i=size/2;
    printf("\nmid is:\n");
    for (int j = 0; j < SIZE; j++)
    {
        printf("  %d", a[i][j]);
    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
