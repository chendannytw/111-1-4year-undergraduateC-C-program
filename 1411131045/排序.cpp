// 排序.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10
void sub1(int id[], int score[]);
int main(void)
{
	int id[SIZE]={12,13,14,15,16,17,19,21,22,23};
	int score[SIZE]={66,67,66,70,73,74,75,75,62,32};
    puts("Data items in original order");
	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%4d",id[i]);
	}
	printf("\n");
	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%4d", score[i]);
	}
	sub1(id, score);
	puts("\nData items in ascending order");
	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%4d", id[i]);
	}
	printf("\n");
	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%4d", score[i]);
	}
	puts("");
}
void sub1(int id[], int score[])
{
	for (int pass = 1; pass < SIZE; ++pass)
	{
		for (size_t i = 0; i < SIZE - pass; ++i)
		{
			if (score[i] > score[i + 1])
			{
				int hold = score[i];
				score[i] = score[i + 1];
				score[i + 1] = hold;
				int hold2 = id[i];
				id[i] = id[i + 1];
				id[i + 1] = hold2;
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
