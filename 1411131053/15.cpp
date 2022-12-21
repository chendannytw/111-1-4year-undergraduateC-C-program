#include <stdio.h>
#define SIZE 4
#define stu 10
//int binarySearch(int b[], int searchKey, int low, int high);
void sort(const char** name, int a[][SIZE], int size);
void swap(int* e1Ptr, int* e2Ptr);
// function main begins program execution
int main(void)
{
    int key = 0, result = 0, i, j;
    // initialize a
    int a[stu][SIZE] = { {2,98,72,0},
                        {3,76,32,0},
                        {6,98,67,0},
                        {7,89,32,0},
                        {8,98,55,0},
                        {9,89,32,0},
                        {10,98,65,0},
                        {11,99,32,0},
                        {12,98,71,0},
                        {13,76,91,0}};
    
const char *name[stu] =
     { "How哥",
        "阿明",
        "小美",
        "阿強",
        "啾啾鞋",
        "魔鞋啾啾",
        "啾啾鞋魔",
        "啾鞋魔啾",
        "陳孜昊",
        "謝任杰"};
    puts("Data items in original order");
    // output original array
    for (j = 0; j < stu; j++)
    {
        for (i = 1; i < SIZE - 1; ++i) {
            a[j][3] += a[j][i];
        }
    }

    for (j = 0; j < stu; j++) {
    
        printf("%8s", name[j]);
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }

    /*    printf("\n");
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[1][i]);
        }
    */
    // bubble sort                                         
    // loop to control number of passes                    

    sort(name, a, stu);
    puts("\nData items in ascending order");

    for (j = 0; j < stu; j++)
    {
        printf("%8s", name[j]);
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }

}


void sort(const char **name, int a[][SIZE], int size)
{const char *ptr;
    int hold, pass, i;
    for (pass = 1; pass < size; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < size - pass; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (a[i][3] < a[i + 1][3]) {
                ptr=name[i];
                name[i]=name[i+1];
                name[i+1]=ptr;
                swap(&a[i][0], &a[i + 1][0]);
                swap(&a[i][1], &a[i + 1][1]);
                swap(&a[i][2], &a[i + 1][2]);
                swap(&a[i][3], &a[i + 1][3]);
            }
        }
    }

}

void swap(int* e1Ptr, int* e2Ptr)
{
    int hold;
    hold = *e1Ptr;
    *e1Ptr = *e2Ptr;
    *e2Ptr = hold;
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
