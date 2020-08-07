/* 14. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0
when m is 0 and -1 when m is less than 0. */

#include <stdio.h>
#include <conio.h>

int main(){

    int m;
    printf("Enter any number: ");
    scanf("%d", &m);
    if(m > 0)
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = 1");
        
    }
    else if(m == 0)
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = 0");

    }
    else if(m < 0)
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = -1");

    }


    return 0;
    getch();

}