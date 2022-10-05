#include <stdio.h>
#include <math.h>  

int main(void)
{
    double principal, rate;
    int year;

    printf_s("principal is ");
    scanf_s("%lf", &principal);

    printf_s("rate is  ");
    scanf_s("%lf", &rate);
    rate += 1;

    printf_s("year");
    scanf_s("%d", &year);

    
    for (unsigned int i=1 ; i<=year ; ++i) {

        principal *= rate;
        printf_s("%d Year %.2f\n", i, principal);
    }
}