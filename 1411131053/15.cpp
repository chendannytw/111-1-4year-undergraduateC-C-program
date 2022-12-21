#include <stdio.h>
#define SIZE 4
#define stu 10
//int binarySearch(int b[], int searchKey, int low, int high);
void sort(const char** name, int a[][SIZE], int size);
void swap(int* e1Ptr, int* e2Ptr);
int minimum(const int grades[][SIZE], size_t pupils, size_t tests);
int maximum(const int grades[][SIZE], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(const int grades[][SIZE], size_t pupils, size_t tests);
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
        "藍亦明",
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

    printf("\n\nLowest grade: %d\nHighest grade:%d\n",
        minimum(a, stu, SIZE),
        maximum(a, stu, SIZE));

    for (size_t student = 0; student < stu; ++student) {
        printf("The average grade for student %u is %.2f\n",
            student, average(a[student], SIZE));
    }
}

void swap(int* e1Ptr, int* e2Ptr)
{
    int hold;
    hold = *e1Ptr;
    *e1Ptr = *e2Ptr;
    *e2Ptr = hold;
}
int minimum(const int grades[][SIZE], size_t pupils, size_t tests)
{
    int lowGrade = 100;

    for (size_t i = 0; i < pupils; ++i) {

        for (size_t j = 0; j < tests; ++j) {

            if (grades[i][j] < lowGrade) {
                lowGrade = grades[i][j];
            }
        }
    }
    return lowGrade;
}
int maximum(const int grades[][SIZE], size_t pupils, size_t tests)
{
    int highGrade = 0;

    for (size_t i = 0; i < pupils; ++i) {

        for (size_t j = 0; j < tests; ++j) {

            if (grades[i][j] > highGrade) {
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}
double average(const int setOfGrades[], size_t tests)
{
    int total = 0;

    for (size_t i = 0; i < tests; ++i) {
        total += setOfGrades[i];
    }
    return (double)total / tests;
}
