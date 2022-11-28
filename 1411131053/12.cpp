// 12.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 15

size_t binarySearch(const int b[],int searchkey,size_t low,size_t high);
void printHeader(void);
void printRow(const int b[],size_t low, size_t mid, size_t high);
int main(void)
{
        int a[SIZE];

        for (size_t i = 0; i < SIZE; ++i) {
            a[i]=2*i;
        }
        printf("%s","Enter a number between 0 and 28:");
        int key;
        scanf_s("%d",&key);

        printHeader();

        size_t result=binarySearch(a,key,0,SIZE - 1);

        if (result != -1) {
            printf("\n%d found at index %d\n",key,result);
        }
        else {
            printf("\n%d not found\n",key);
        }
}

    size_t binarySearch(const int b[], int searchkey, size_t low, size_t high)
    {
        while (low <= high) {
            size_t middle=(low+high)/2;

            printRow(b,low,middle,high);

            if (searchkey == b[middle]) {
                return middle;
            }
            else if (searchkey < b[middle]) {
                high=middle - 1;
            }
            else {
                low=middle+1;
            }
        }
        return -1;
    }

    void printHeader(void)
    {
        puts("\nIndices:");

        for (unsigned int i = 0; i < SIZE; ++i) {
            printf("%3u",i);
        }
        puts("");

        for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
            printf("%s","-");
        }
        puts("");
    }

    void printRow(const int b[], size_t low, size_t mid, size_t high)
    {
        for (size_t i = 0; i < SIZE; ++i) {
            if (i<low || i>high) {
                printf("%s","  ");
            }
            else if (i == mid) {
                printf("%3d*",b[i]);
            }
            else {
                printf("%3d",b[i]);
            }
        }
        puts("");
    }

---------------------------------------------------------------------------------
#include <stdio.h>
#define SIZE 15

size_t binarySearch(const int b[],int searchkey,size_t low,size_t high);
void printHeader(void);
void printRow(const int b[],size_t low, size_t mid, size_t high);
int main(void)
{
        int a[SIZE]={2,7,9,21,62,63,77,79,80,92,101,102,123,144,167};
        

        printf("%s","{2,7,9,10,21,62,63,67,79,80,92,101,102,123,144,167}\nEnter a number between 0 and 200:");
        int key;
        scanf_s("%d",&key);

        printHeader();

        size_t result=binarySearch(a, key, 0, SIZE - 1);

        if (result != -1) {
            printf("\n%d found at index %d\n", key, result);
        }
        else {
            printf("\n%d not found\n", key);
        }
}

    size_t binarySearch(const int b[], int searchkey, size_t low, size_t high)
    {
        while (low <= high) {
            size_t middle=(low+high)/2;

            printRow(b,low,middle,high);

            if (searchkey == b[middle]) {
                return middle;
            }
            else if (searchkey < b[middle]) {
                high=middle - 1;
            }
            else {
                low=middle+1;
            }
        }
        return -1;
    }

    void printHeader(void)
    {
        puts("\nIndices:");

        for (unsigned int i = 0; i < SIZE; ++i) {
            printf("%3u",i);
        }
        puts("");

        for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
            printf("%s","-");
        }
        puts("");
    }

    void printRow(const int b[], size_t low, size_t mid, size_t high)
    {
        for (size_t i = 0; i < SIZE; ++i) {
            if (i<low || i>high) {
                printf("%s","  ");
            }
            else if (i == mid) {
                printf("%3d*",b[i]);
            }
            else {
                printf("%3d",b[i]);
            }
        }
        puts("");
    }


==================================================================================
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS],size_t pupils, size_t tests);
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[],size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);
int main(void)
{
   int studentGrades[STUDENTS][EXAMS]=
   {{77,68,86,73},
	{96,87,89,78},
	{70,90,86,81} };

   puts("The array is:");
   printArray(studentGrades, STUDENTS, EXAMS);

   printf("\n\nLowest grade: %d\nHighest grade:%d\n",
	   minimum(studentGrades, STUDENTS, EXAMS),
	   maximum(studentGrades, STUDENTS, EXAMS));

   for (size_t student = 0; student < STUDENTS; ++student) {
	   printf("The average grade for student %u is %.2f\n",
		   student, average(studentGrades[student], EXAMS));
   }
}
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests)
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
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests)
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
	int total=0;

	for (size_t i = 0; i < tests; ++i) {
		total+=setOfGrades[i];
	}
	return (double) total/tests;
}

void printArray(const int grades[][EXAMS], size_t pupils, size_t tests)
{
	printf("%s", "           [0]  [1]  [2]  [3]");

	for (size_t i = 0; i < pupils; ++i) {

		printf("\nstudentGrades[%u] ",i);

		for (size_t j = 0; j < tests; ++j) {
			printf("%-5d", grades[i][j]);
		}
	}
}
--------------------------------------------------------------------------------
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
