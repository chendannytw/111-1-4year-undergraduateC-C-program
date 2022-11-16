// 10-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{
    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = { 0 };

    // place the survey responses in the responses array
    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    // for each answer, select value of an element of array responses
    // and use that value as an index in array frequency to 
    // determine element to increment
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%17s\n", "Rating", "Frequency");
    // output the frequencies in a tabular format
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }
}
int frequency[FREQUENCY_SIZE]={0};
void sub1(int freq[], int size)
{int rating,hist;
for (rating = 1; rating < FREQUENCY_SIZE; ++rating) {
    printf("%6d%17d ",rating,freq[rating]);
    for(hist=0;hist<freq[rating];hist++)
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
