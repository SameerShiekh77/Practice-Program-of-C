// 2. Write a C program to get the absolute difference between n and 51. If n is greater than 51 print triple the absolute difference
// Expected Output:

// 6
// 21
// 0

#include <stdio.h>
#include <conio.h>

int main(){
    int n,num =51;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n < num)
    {
        printf("The difference between of 51 and %d is: %d",n,num -n);
    }    
    else if(n > num)
    {
        printf("The %d is greater than 51 so difference with your number and multiple with 3\nand ans is: %d",n,(n-num)*3);
    }


    return 0;
    getch();

}