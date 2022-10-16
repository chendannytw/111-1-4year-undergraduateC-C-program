// class-week5.2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h> 

int facto(int);
double expo(int);
double power(int, int);
int main(void)
{
	int x;
	int y;
	printf("please enter one number for y:");
	scanf_s("%d", &y);
	for (x = 1; x <= 10; ++x) {
		printf("%d  ", facto(x));
		printf("\ne value is %lf", expo(x));
		printf("\n power of y is :%.1lf", power(y, x));
	}

	puts("");
}

int facto(int y)
{
	int result = 1, i;
	for (i = 1; i <= y; i++)
		result *= i;

	return result;
}
double expo(int y)
{
	int result = 1, i;
	double expo = 1;
	for (i = 1; i <= y; i++) {
		result *= i;
		expo = expo + (1.0 / result);
	}
	return expo;
}
double power(int x, int y)
{
	int result=1,i;
	for (i = 1; i <= y; i++)
		result*= x;
	return result;
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
