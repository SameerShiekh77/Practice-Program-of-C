// 9. Write a C program to check whether a given number is even or odd.

#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    printf("Enter any number to check is even or odd");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("%d is even number\n", n);
    }else
    {
        printf("%d is odd number\n", n);
    }
    


    return 0;
    getch();

}