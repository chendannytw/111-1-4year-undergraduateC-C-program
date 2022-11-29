// 二維陣列.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4
int min(const int grades[][EXAMS],int pupils,int tests);
int max(const int grades[][EXAMS],int pupils,int tests);
double average(const int setofgrades[], int tests);
void printarray(const int grades[][EXAMS], int pupils, int tests);
int main(void)
{
    int studentgrades[STUDENTS][EXAMS] = { {77,68,86,73},{96,87,89,78}, {70,90,86,81} };
    puts("The array is:");
    printarray(studentgrades,STUDENTS,EXAMS);
    printf("\n\nLowest grade:%d\nHighest grade:%d\n",
        min(studentgrades, STUDENTS, EXAMS),
        max(studentgrades, STUDENTS, EXAMS));
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("The average grade for student %d is %.2f\n",i,average(studentgrades[i],EXAMS));
    }
}
int min(const int grades[][EXAMS], int pupils, int tests)
{
    int lowgrade = 100;
    for (int i = 0; i < pupils; i++)
    {
        for(int j=0;j<tests;++j)
        {
            if (grades[i][j] < lowgrade)
                lowgrade = grades[i][j];
        }
    }
    return lowgrade;
}
int max(const int grades[][EXAMS], int pupils, int tests)
{
    int highgrade = 0;
    for (int i = 0; i < pupils; i++)
    {
        for (int j = 0; j < tests; ++j)
        {
            if (grades[i][j] > highgrade)
                highgrade = grades[i][j];
        }
    }
    return highgrade;
}
double average(const int setofgrades[], int tests)
{
    int total = 0;
    for (int i = 0; i < tests; i++)
    {
        total += setofgrades[i];
    }
    return (double)total / tests;
}
void printarray(const int grades[][EXAMS], int pupils, int tests)
{
    printf("%s", "           [0] [1] [2] [3]");
    for (int i = 0; i < pupils; i++)
    {
        printf("\nstudentgrades[%d]", i);
        for (int j = 0; j <tests ; j++)
        {
            printf("%-5d", grades[i][j]);
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
