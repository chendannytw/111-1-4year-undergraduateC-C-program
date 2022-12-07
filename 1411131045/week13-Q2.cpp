// week13-Q2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define STUDENTS 10
#define EXAMS 4
void printarray(int grades[][EXAMS], int pupils, int tests);
int min(int grades[][EXAMS], int pupils, int tests);
int max(int grades[][EXAMS], int pupils, int tests);
void sort(int grades[][EXAMS], int pupils, int tests);
void swap(int* element1Ptr, int* element2Ptr);
int main(void)
{
    int studentgrades[STUDENTS][EXAMS] = { {1,77,65,0},{2,96,87,0}, {3,70,90,0},  {4,80,50,0},{5,92,70,0}, {38,87,97,0},  {11,20,37,0},{27,84,65,0}, {34,66,77,0}, {31,40,80,0} };
    double total = 0;
    puts("The array is:");
    printarray(studentgrades, STUDENTS, EXAMS);
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = 1; j < EXAMS - 1; j++)
        {
            total += studentgrades[i][j];
        }
        studentgrades[i][EXAMS - 1] = total/2 ;
        total = 0;
    }
    sort(studentgrades, STUDENTS, EXAMS);
    puts("\nThe new array is:");
    printarray(studentgrades, STUDENTS, EXAMS);
    printf("\n\nLowest grade:%d\nHighest grade:%d\n",
        min(studentgrades, STUDENTS, EXAMS),
        max(studentgrades, STUDENTS, EXAMS));
}
void printarray(int grades[][EXAMS], int pupils, int tests)
{
    printf("%s", "                [0] [1]  [2]  [3]");
    for (int i = 0; i < pupils; i++)
    {
        printf("\nstudentgrades[%d]", i);
        for (int j = 0; j < tests; j++)
        {
            printf("%-5d", grades[i][j]);
        }
    }
}
void sort(int grades[][EXAMS], int pupils, int tests)
{
    for (int pass = 0; pass < pupils; pass++)
    {
        for (int i = 0; i < pupils - 1; i++)
        {
            if (grades[i][EXAMS - 1] < grades[i + 1][EXAMS - 1])
            {
                for (int j = 0; j < tests; j++)
                {
                    swap(&grades[i][j], &grades[i + 1][j]);
                }
            }
        }
    }
}
void swap(int* element1Ptr, int* element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
int min( int grades[][EXAMS], int pupils, int tests)
{
    int lowgrade = 100;
    int lowst = 0;
    for (int i = 0; i < pupils; i++)
    {
        for (int j = 0; j < tests; ++j)
        {
            if (grades[i][EXAMS - 1] < lowgrade)
            {
                lowgrade = grades[i][EXAMS - 1];
                lowst = grades[i][0];
            }
        }
    }
    printf("\nhigh st id is:%d", lowst);
    return lowgrade;
}
int max( int grades[][EXAMS], int pupils, int tests)
{
    int highgrade = 0;
    int highst = 0;
    for (int i = 0; i < pupils; i++)
    {
        for (int j = 0; j < tests; ++j)
        {
            if (grades[i][EXAMS - 1] > highgrade)
            {
                highgrade = grades[i][EXAMS - 1];
                highst = grades[i][0];
            }
        }
    }
    printf("\nhigh st id is:%d", highst);
    return highgrade;

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
