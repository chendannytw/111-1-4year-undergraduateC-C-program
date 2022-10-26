#include<stdio.h>

int fac(int);


int main() {
    //Q1.
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf_s("%d ", fac(i));
    }
    printf_s("\n");
    printf_s("%d\n", fac(n));

    //Q2

    printf_s("Q2\n");
    scanf_s("%d", &n);
    int n1 = 0, n2 = 1, asw;

    if (n <= 1)printf_s("%d ", n);

    else
    {
        for (int i = 2; i <= n; i++) {
            asw = n1 + n2;
            n1 = n2;
            n2 = asw;
        }
        printf_s("%d ", asw);
    }
}



int fac(int n) {
    if (n <= 1) return n;

    else return fac(n - 1) + fac(n - 2);
}