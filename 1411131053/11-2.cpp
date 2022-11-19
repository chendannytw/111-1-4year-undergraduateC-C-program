// 11-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10
void sort(int a[], int c[], int size);
int main(void)
{
    int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
    int c[SIZE] = { 66,67,66,70,73,74,75,75,62,32 }, ID, i, j = 0;
    puts("Data iteam in original order");

    for (i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%4d", c[i]);
    }

    sort(a, c, SIZE);
    puts("\nData iteams in ascending order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%4d", c[i]);
    }

    printf("Input student ID:");
    scanf_s("%d", &ID);
    for (i = 0; i < SIZE; i++)
        if (ID == a[i])
        {
            printf("Student %d got %d!", a[i], c[i]);
            break;
        }
        else
            j++;
    if (j >= 9) printf("student %d not found", ID);

    puts("");
}
void sort(int a[], int c[], int size)
{
    int hold;
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        for (size_t i = 0; i < size - pass; ++i) {
            if (c[i] > c[i + 1]) {
                hold = c[i];
                c[i] = c[i + 1];
                c[i + 1] = hold;
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
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
