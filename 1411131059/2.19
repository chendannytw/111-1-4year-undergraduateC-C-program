#include <stdio.h>

int main(void)
{
    printf("Enter three different integers.");

    int num1, num2, num3;

    scanf_s("%d %d %d", &num1, &num2, &num3);

    int sum;
    sum = num1 + num2 + num3;

    int average;
    average = sum / 3;

    int product;
    product = num1 * num2 * num3;
    
    int small;
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            small = num1;
        }
        else
        {
            small = num3;
        }
    }
    else
    {
        if (num2 < num3)
        {
            small = num2;
        }
        else
        {
            small = num3;
        }
    }
    
    int large;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            large = num1;
        }
        else
        {
            large = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            large = num2;
        }
        else
        {
            large = num3;
        }
    }
   
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", small);
    printf("Largest is %d\n", large);

  }

