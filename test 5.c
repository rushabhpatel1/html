//5. write a c program that uses pointers to swap the values of two integers. implement a function for the swapping opreation.

#include <stdio.h>


void swap(int *a, int *b);

int main() 
{
    int num1, num2;

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    
    swap(&num1, &num2);


    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}


void swap(int *a, int *b) 
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

