// 二元搜尋.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#define SIZE 20
void sub1(int id[], int score[]);
void search(int id[], int score[]);
int binarysearch(int b[], int key, int lift, int right);
int average(int sc[]);
int midpoint(int sc[]);
int main(void)
{
	int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 };
	int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 };
	int ID = 0;
	int key = 0;
	int result = 0;
	puts("Data items in original order");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%4d", id[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%4d", score[i]);
	}
	sub1(id, score);
	puts("\nData items in ascending order");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%4d", id[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%4d", score[i]);
	}
	search(id, score);
	puts("");
	printf("please enter the score:");
	scanf_s("%d", &key);
	if ((result = binarysearch(score, key, 0, SIZE - 1)) == -1)
		printf("student not found!!");
	else
		printf("成績為%d的學生學號為:%d", key, id[result]);
	printf("\nQ2:\n平均為:%d", average(score));
	printf("\n中位數為%d", score[midpoint(id)]);
	printf("學生成績表\nid:%d\n名次:%d\n成績:%d"id[result],result,key);
}
void sub1(int id[], int score[])
{
	for (int pass = 1; pass < SIZE; ++pass)
	{
		for (int i = 0; i < SIZE - pass; ++i)
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
void search(int id[], int score[])
{
	int ID, j = 0;
	printf("\nenter student id:");
	scanf_s("%d", &ID);
	for (int i = 0; i < SIZE; i++)
	{
		if (ID == id[i])
			printf("Student %d score is %d!", id[i], score[i]);
		else
			j++;
	}
	if (j > SIZE-1)
		printf("Student %d not found!", ID);
}
int binarysearch(int b[], int key, int lift, int right)
{
	while (lift <= right)
	{
		int middle = (lift + right) / 2;
		if (key == b[middle])
			return middle;
		else if (key < b[middle])
			right = middle - 1;
		else
			lift = middle + 1;
	}
	return -1;
}
int average(int sc[]) 
{
	int result=0;
	int aver;
	for (int i = 0; i < SIZE; i++)
	{
		result += sc[i];
	}
	aver = result / SIZE;
	return aver;
}
int midpoint(int sc[])
{
	int mid=0 + SIZE / 2;
	return mid;
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
