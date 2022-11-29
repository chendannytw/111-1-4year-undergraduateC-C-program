// 搜尋2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 21
int binarysearch(const int b[], int key,int low, int high);
void printheader(void);
void printrow(const int b[], int low, int mid, int high);
int main(void)
{
    int a[SIZE] = { 0 };
	for (size_t i = 0; i < SIZE; i++) 
	{
		a[i] = 2 * i;
	}
	printf("Enter a number between 0 and 200:");
	int key = 0;
	scanf_s("%d",&key);
	printheader();
	int result = binarysearch(a,key,0, SIZE-1);
	if (result != -1)
		printf("\n%d found at subscript %d\n", key,result);
	else
		printf("\n%d not found\n",key);
}
int binarysearch(const int b[], int key, int low, int high)
{
	while (low <= high)
	{
		int middle = (low + high) / 2;
		printrow(b, low, middle, high);
		if (key==b[middle])
			return middle;
		else if (key<b[middle])
			high = middle - 1;
		else
			low = middle + 1;
	}
	return -1;
}
void printheader(void)
{
	puts("\nsubscripts:");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d ", i);
	}
	puts("");
	for (int i = 1; i <= 4*SIZE; i++)
	{
		printf("%s", "-");
	}
	puts("");
}
void printrow(const int b[], int low, int mid, int high)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i<low || i>high)
			printf("%s", "    ");
		else if (i == mid)
			printf("%3d*",b[i]);
		else
			printf("%3d ", b[i]);
	}
	puts("");
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
