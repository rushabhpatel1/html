// 1. write a c program that prompts the user to enter an integer. Using a loop, calculate and display the factorial of the number.

#include <stdio.h>

main() 
{
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter the integer: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Error! Factorial is negative number-doesn't exist.");
    }
	else 
	{
    
        for (i = 1; i <= num; ++i) 
		{
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }


}

