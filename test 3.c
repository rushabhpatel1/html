//3. implement a c program to print the following pattern using nested for loop:
//_ _ _ _ *
//_ _ _ * *
//_ _ * * *
//_ * * * *
//* * * * *

#include <stdio.h>

main() 
{
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
	{
        
        for (j = 1; j <= rows - i; j++) 
		{
            printf("_ ");
        }

        
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }

        printf("\n");
    }


}

