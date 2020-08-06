// 4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if(abs(n - 100) <=10 ||abs(n - 200) <=10)
    {
       printf("True");
    }    
    else
    {
        printf("False");
    }
    return 0;
    getch();

}
