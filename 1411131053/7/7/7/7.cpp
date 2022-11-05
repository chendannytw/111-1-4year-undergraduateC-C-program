// 7.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

# include <stdio.h>
int f(int);
int main(void)
{
	int n;


	scanf_s("%d", &n);
	printf("%d\n", f(n));
}
int f(int n)
{
	if (n <= 1)
		return n;
	else
		return f(n - 2) + f(n - 1);

int number1 = 0, number2 = 1, answer;
   scanf_s("%d",&n);
   if(n<=1)
	   printf("%d",n);
   else {
	   for (int i = 2; i <= n; i++) {
		   answer = number1 + number2;
		   number1 = number2;
		   number2 = answer;

	   }
	   printf("number1 answer is %d\n", f(n));
	   printf("number2 answer is %d\n", answer);
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
