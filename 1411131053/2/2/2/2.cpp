// 2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("輸入第一數值\n");
	scanf_s("%d", &x);

	printf("輸入第二數值\n");
	scanf_s("%d", &y);

	int S;
	S = x + y;
	printf("和%d\n", S);

	int D;
	D = x - y;
	printf("差%d\n", D);

	int P;
	P = x * y;
	printf("乘積%d\n", P);

	int Q;
	Q = x % y;
	printf("商數%d\n", Q);

	int R;
	R = x / y;
	printf("餘數%d\n", R);

	int v;
	int a;
	int e;
	int s;
	//
	printf("物體速度");
	scanf_s("%d", &v);

	printf("加速度");
	scanf_s("%d", &a);

	printf("經過時間");
	scanf_s("%d", &e);

	v = v + a * e;
	printf("最後速度%d", v);

	s = v * e + (1 / 2) * a * e;
	printf("移動距離%d", s);
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
