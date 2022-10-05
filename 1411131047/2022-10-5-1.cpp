#include<stdio.h>

int main() {
	int pas = 0, fal = 0, stu = 0, res,bp;
	
	printf_s("Enter Result (1=pass, 2=fail, -1=abort): ");
	scanf_s("%d", &res);
	
	while (res != -1) {
		if (res == 1) pas++;

		if (res == 2) fal++;

		stu++;
		printf_s("Enter Result (1=pass, 2=fail, -1=abort): ");
		scanf_s("%d", &res);
		}
	
	printf_s("Passed %d\n", pas);
	printf_s("Failed %d\n", fal);
	printf_s("%.1f",(float)pas/stu*100);
	printf_s("%%\n");


	if ((float)pas / stu >= 0.8) printf_s("Bouns to instructor");
}