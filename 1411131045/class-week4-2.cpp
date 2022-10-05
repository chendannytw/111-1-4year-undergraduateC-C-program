

#include <stdio.h>
#include <math.h>  

int main(void)
{
    double principal =0; 
    double rate =0;
    int period = 0;
    printf("輸入定存多久(年):");
    scanf_s("%d", &period);
    printf("輸入第一年本金:");
    scanf_s("%lf", &principal);
    printf("輸入定存利率:");
    scanf_s("%lf", &rate);
   
    printf("%4s%21s\n", "Year", "Amount on deposit");

   
    for (unsigned int year = 1; year <= period; ++year) {

        double amount = principal * pow(1.0 + rate, year);

        printf("%4u%21.2f\n", year, amount);
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
