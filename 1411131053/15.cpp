#include <stdio.h>
#define SIZE 4
#define stu 10
void sort(const char** name, int a[][SIZE], int size);
void swap(int* e1Ptr, int* e2Ptr);
void min(int grades[][SIZE], int pupils, int tests);
void max(int grades[][SIZE], int pupils, int tests);
int main(void)
{
    int key = 0, result = 0, i, j;
    
    int a[stu][SIZE] = { {2,98,72,0},
                        {3,76,32,0},
                        {6,98,67,0},
                        {7,89,32,0},
                        {8,98,55,0},
                        {9,89,32,0},
                        {10,98,65,0},
                        {11,99,32,0},
                        {12,98,71,0},
                        {13,76,91,0} };

    const char* name[stu] =
    {  "How哥",
       "啾啾鞋",
       "阿明",
       "小美",
       "阿強",
       "魔鞋啾啾",
       "啾啾鞋魔",
       "啾鞋魔啾",
       "謝任傑",
       "陳孜昊" };



    puts("姓名：  座號 數學 計概 成績");
    
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
                    

    sort(name, a, stu);
    puts("\n\n姓名：  座號 數學 計概 成績");

    for (j = 0; j < stu; j++)
    {
        printf("%8s", name[j]);
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }
    
    min(a, stu, SIZE);
    printf("last student name is:%s", &*name[9]);
    max(a, stu, SIZE);
    printf("frist student name is:%s", &*name[0]);

}


void sort(const char** name, int a[][SIZE], int size)
{
    const char* ptr;
    int hold, pass, i;
    for (pass = 1; pass < size; ++pass) {

           
        for (i = 0; i < size - pass; ++i) {

            
            if (a[i][3] < a[i + 1][3]) {
                ptr = name[i];
                name[i] = name[i + 1];
                name[i + 1] = ptr;
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
void min(int grades[][SIZE], int pupils, int tests)
{
    int lowgrade = 100;
    int lowst = 0;
    for (int i = 0; i < pupils; i++)
    {
        for (int j = 0; j < tests; ++j)
        {
            if (grades[i][SIZE - 1] < lowgrade)
            {
                lowgrade = grades[i][SIZE - 1];
                lowst = grades[i][0];
            }
        }
    }
    printf("\n\nlow st id is:%d", lowst);
    printf("\nLowest grade:%d\n", lowgrade);
}
void max(int grades[][SIZE], int pupils, int tests)
{
    int highgrade = 0;
    int highst = 0;
    for (int i = 0; i < pupils; i++)
    {
        for (int j = 0; j < tests; ++j)
        {
            if (grades[i][SIZE - 1] > highgrade)
            {
                highgrade = grades[i][SIZE - 1];
                highst = grades[i][0];
            }
        }
    }
    printf("\n\nhigh st id is:%d", highst);
    printf("\nHighest grade:%d\n", highgrade);
}
