#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
    unsigned int i, temp, n,ed;
    double asw,st;

    printf_s("Enter n: ");
    scanf_s("%d", &n);
    n = pow(10, n);
    ed = n - 1;
    st = (double)1 / n;
    //printf_s("%lf\n", st);

    for (i = 1; i <= n; ++i) {
        temp = rand() % ed;
        asw = (double)temp / n + st;
        printf_s("%lf ", asw);
        if (i % 5 == 0) {
            printf_s("\n");
        }

    }
}
