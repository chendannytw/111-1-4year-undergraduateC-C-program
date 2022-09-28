#include <stdio.h>

int main(void)
{
    printf("Enter three integers.");

    int num1, num2, num3;

    scanf_s("%d %d %d", &num1, &num2, &num3);

    int sum;
    sum = num1 + num2 + num3;

    int average;
    average = sum / 3;

    int product;
    product = num1 * num2 * num3;
    
    int small;
    small = num1;
    if (num2 < num1) {
        small = num2;
        }
    if (num3 < small) {
        small = num3;
    }

    int large;
    large = num1;
    if (num2 > num1) {
       large = num2;
        }
    if (num3 > large) {
        large = num3;
    }

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", small);
    printf("Largest is %d\n", large);

   
  
}

