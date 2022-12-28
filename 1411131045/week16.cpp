// week16.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string>
int upper(char str[]);
int lower(char str[]);
int num(char str[]);
char str[] = "abcDEFG123";
int (*f[3])(char*) = { upper,lower,num };
int main(void)
{
	printf("原始字串:%s\n", str);
	printf("英文大寫數量為:%d\n",(*f[0])(str));
	printf("英文小寫數量為:%d\n", (*f[1])(str));
	printf("數字數量為:%d\n", (*f[2])(str));
}

int upper(char str[])
{
	int a=0;
	for (int i = 0; i <11; i++)
	{
		if (isupper(str[i]) != 0)
			a++;
	}
	return a;
}

int lower(char str[])
{
	int b = 0;
	for (int i = 0; i < 11; i++)
	{
		if (islower(str[i]) != 0)
			b++;
	}
	return b;
}

int num(char str[])
{
	int c = 0;
	for (int i = 0; i < 11; i++)
	{
		if (isdigit(str[i]) != 0)
			c++;
	}
	return c;
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
