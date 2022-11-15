// 陣列.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
int main(void)
{
    int responses[RESPONSES_SIZE]={1,5,10,2,4,3,6,7,9,8,8,9,7,6,4,3,10,1,3,2,6,7,4,9,3,10,2};
	int frequency[FREQUENCY_SIZE] = { 0 };
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer)
	{
		++frequency[responses[answer]];
	}
	printf("%s%12s\n","rating","frequency");
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating)
	{
		printf("%6zu%12d%5s", rating, frequency[rating],"");
		for (int j = 1; j <=frequency[rating]; ++j)
		{
			printf("%c",'*');
		}
		puts("");
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
