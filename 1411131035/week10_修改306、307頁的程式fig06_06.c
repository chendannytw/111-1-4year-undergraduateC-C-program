#include <stdio.h>
#define SIZE 5

void ZXC(int n[], rsize_t se);

int main(void)
{
    // use initializer list to initialize array n
    int a[SIZE] = { 19, 3, 15, 7, 11 }, i, j;

    ZXC(a,SIZE);
        
    
}

void ZXC(int n[],rsize_t se)
{
    printf("%s%13s%17s\n", "Element", "Value", "Histogram");
    for (rsize_t i = 0; i < se; ++i)
    {
        printf("%7u%13d        ", i, n[i]);

        for (rsize_t j = 1; j <= n[i]; ++j) { // print one bar
            printf("%c", '*');
        }
        puts(""); // end a histogram bar with a newline
    }
}
