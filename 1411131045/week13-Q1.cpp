// 指標.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <stdio.h>
#define L 2
#define SIZE 20
void sort(int a[][SIZE],  int size);
void swap(int* element1Ptr, int* element2Ptr);
int main(void)
{
    int key, result = 0;
    int grade[L][SIZE] = { { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 },{ 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 } };

    puts("Data items in original order");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", grade[0][i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", grade[1][i]);
    }


    sort(grade, SIZE);
    puts("\nData items in ascending order");

    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", grade[0][i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", grade[1][i]);
    }


}


void sort(int a[][SIZE], int size)
{
    int hold;
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        for (int i = 0; i < size - pass; ++i) {

            if (a[1][i] > a[1][i + 1]) {
                swap(&a[1][i],&a[1][i + 1]);
                swap(&a[0][i], &a[0][i + 1]);
            }
        }
    }

}

void swap(int* element1Ptr, int* element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
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
