// 11. Write a C program to find whether a given year is a leap year or not

#include <stdio.h>
#include <conio.h>

int main() {

    int year;
    printf("Enter any year to check is a leap year or not: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year");
            }
            else
            {
                printf("%d is not a leap year");
            }
        }
        else
            {
                printf("%d is a leap year (it has 366 days)");
            }
    }
    else
    {
        printf("%d is not a leap year");
    }


    return 0;
    getch();

}