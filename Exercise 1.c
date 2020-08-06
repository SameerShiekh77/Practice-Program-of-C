// 1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
// Expected Output:
// 3
// 12

#include <stdio.h>
#include <conio.h>

int main(){

    int num1,num2,ans;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if(num1 != num2)
    {
        ans = num1 + num2;
        printf("The answer of two different number is: %d", ans);
    }else if(num1 == num2)
    {
        ans = (num1 + num2) * 3;
        printf("The answer of two same number and multiplication of 3 is: %d", ans);

    }
    return 0;
    getch();

}
