// 5. Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7.

#include <stdio.h>
#include <conio.h>

int main() {

    int num,ans;
    printf("Enter any number to check is a multiple of 3 or a multiple of 7: ");
    scanf("%d", &num);
    ans = num % 3;
    int ans1 = num % 7;
    if(ans == 0)
    {
        printf("True");
    }
    else if(ans1 == 0)
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
