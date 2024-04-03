//4. create the c program that defines a function to check if a given number is a leap year or not.

#include <stdio.h>

int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
        return 1; 
    } 
	else 
	{
        return 0; 
    }
}

main() 
{
    int year;
    
	printf("Enter a year: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) 
	{
        printf("%d is a leap year.\n", year);
    } 
	else 
	{
        printf("%d is not a leap year.\n", year);
    }
    

}

