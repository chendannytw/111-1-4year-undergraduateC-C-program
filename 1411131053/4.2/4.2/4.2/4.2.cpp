// 4.2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main(void)
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 1;
	int result = 0;

	printf("%s", "Enter the result(1=pas,2=fail,-1=abort):");
	scanf_s("%d", &result);

	while (result != -1) {
		if (result == 1)
			passes++;
		if (result == 2)
			failures++;

		student++;
		printf("%s", "Enter the result(1=pas,2=fail,1=abort):");
		scanf_s("%d", &result);
	}
	printf("及格人數: %d\n", passes);
	printf("不及格人數: %d\n", failures);
	printf("及格人數佔全班比例: %f%%", (float)passes / student);

	if (((float)passes / result) >= 0.8) {
		puts("給老師加薪");
	}//end if

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
