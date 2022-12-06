// 二維陣列.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define STUDENTS 3
#define EXAMS 6
void printarray(int grades[][EXAMS], int pupils, int tests);
void sort(int grades[][EXAMS], int pupils, int tests);
void swap(int* element1Ptr, int* element2Ptr);
int main(void)
{
    int studentgrades[STUDENTS][EXAMS] = { {012,77,68,86,73,0},{006,96,87,89,78,0}, {010,70,90,86,81,0} };
    double total=0;
    puts("The array is:");
    printarray(studentgrades,STUDENTS,EXAMS);
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = 1; j < EXAMS-1; j++)
        {
            total += studentgrades[i][j];
        }
        studentgrades[i][EXAMS-1] = total / 4;
        total = 0;
    }
    sort(studentgrades, STUDENTS, EXAMS);
    puts("\nThe new array is:");
    printarray(studentgrades,STUDENTS,EXAMS);
}
void printarray(int grades[][EXAMS], int pupils, int tests)
{
    printf("%s", "                [0] [1]  [2]  [3]  [4]  [5]");
    for (int i = 0; i < pupils; i++)
    {
        printf("\nstudentgrades[%d]", i);
        for (int j = 0; j <tests ; j++)
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
            if (grades[i][EXAMS - 1] > grades[i + 1][EXAMS - 1])
            {
                for (int j = 0; j < tests; j++)
                {
                    swap(&grades[i][j],&grades[i + 1][j]);
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

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
