#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
    unsigned int i,temp,n;
    double asw;

    printf_s("Enter n: ");
    scanf_s("%d", &n);
    n = pow(10, n);
    printf_s("%lf\n", s);

    for (i = 1; i <= n; ++i) {
        temp = rand() % n;
        asw = (double)temp/n;
        printf_s("%lf ", asw);
        if (i % 5 == 0) {
            printf_s("\n");
        }

    }
}