// 10. Write a C program to check whether a given number is positive or negative

#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    printf("Enter a number to check is positive or negative");
    scanf("%d", &n);
    if(n>0)
    {
        printf("%d is a positive number", n);
    }
    else if(n<0)
    {
        printf("%d is a negative number", n);
    }

    return 0;
    getch();

}