#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
#define STU 13

struct student {
	char name[10];
	unsigned int stu_id;
	int math;
	int computer;
	double avg;
};
typedef struct student  STUDENT;


void sortAry(STUDENT ar1[]);
void SWAP(STUDENT* Ptr1, STUDENT* Ptr2);

int main(void)
{
	int j, mid;


	STUDENT stu_class[STU] = { {"Alice",2,98,72,0},
						{"Danny",3,76,32,0},
						{"Tom",6,98,67,0},
						{"Nina",7,89,32,0},
						{"May",8,98,55,0},
						{"Tim",9,89,32,0},
						{"Sindy",10,98,65,0},
						{"Bob",11,99,32,0},
						{"Steven",12,98,71,0},
						{"Ellen",13,76,91,0},
						{"Nicole",18,93,49,0},
						{"Tan",19,67,82,0},
						{"Jenny",20,66,98,0} };


	puts("Student   ID Math Comp AVG");

	for (j = 0; j < STU; j++) stu_class[j].avg = (stu_class[j].math + stu_class[j].computer) / 2.0;
	sortAry(stu_class);


	for (j = 0; j < STU; j++)
	{
		printf_s("%-8s", stu_class[j].name);
		printf_s(" %3d", stu_class[j].stu_id);
		printf_s(" %4d", stu_class[j].math);
		printf_s(" %4d", stu_class[j].computer);
		printf_s(" %.2f", stu_class[j].avg);
		printf_s("\n");
	}
	mid = STU / 2;
	printf_s("\n%s\n%-8s", "MID =", stu_class[mid].name);
	printf_s(" %3d", stu_class[mid].stu_id);
	printf_s(" %4d", stu_class[mid].math);
	printf_s(" %4d", stu_class[mid].computer);
	printf_s(" %.2f", stu_class[mid].avg);
	printf_s("\n");
}


void sortAry(STUDENT ar1[]) {
	int i, j;
	for (i = 0; i < STU; i++) {
		for (j = 0; j < STU - i; j++) {
			if (ar1[j].avg < ar1[j + 1].avg) {
				SWAP(&ar1[j], &ar1[j+1]);
			}
		}
	}
}

void SWAP(STUDENT* cPtr, STUDENT* cPtr1) {
	STUDENT temp;
	temp = *cPtr;
	*cPtr = *cPtr1;
	*cPtr1 = temp;
}
