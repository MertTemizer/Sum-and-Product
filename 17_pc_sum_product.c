#include <stdio.h>

int main()
{
    float number1, number2, sum, product;
    
    printf("Input two numbers: ");
    scanf("%f %f", &number1, &number2);
    
    sum = number1 + number2;
    printf("The sum is: %f\n", sum);
    
    product = number1 * number2;
    printf("The product is: %f\n", product);
    
    return 0;
}
