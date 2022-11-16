// 10.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 5
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
int main(void)
{
    int n[SIZE]={19,3,15,7,11};
    printf("%s%13s%17s\n","Element","Value","Histogram");
    int i;
    for (i = 0; i < SIZE; ++i) {
        printf("%7u%13d    ",i,n[i]);
        int j;
        for (j = 1; j <= n[i]; ++j) {
            printf("%c",'*');
        }
        puts("");
    }
}
int frequency[FREQUENCY_SIZE]={0};
void sub1(int freq[], int size)
{int rating,hist;
for (rating = 1; rating < FREQUENCY_SIZE; ++rating) {
    printf("%6d%17d ",rating,freq[rating]);
    for(hist=0;hist<freq[rating];hist++)
        printf("*");
    printf("\n");
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
