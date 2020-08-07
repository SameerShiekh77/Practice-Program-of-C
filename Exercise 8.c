// 8. Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>
#include <conio.h>

int main(){

    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    if(num1 == num2)
    {
        printf("Number 1 and Number 2 are equal\n");
    }
    else
    {
        printf("Number 1 and Number 2 are not equal\n");
    }
    

    return 0;
    getch();

}