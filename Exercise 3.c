// 3. Write a C program to check two given integers, and print true if one of them is 30 or if their sum is 30.
// Expected Output:
// 1
// 1
// 0


#include <stdio.h>
#include <conio.h>

int main(){

    int x,y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    int sum = x + y;

    if(x ==30)
    {
        printf("True");
    }
    else if(y == 30)
    {
    	printf("True");
	}
    else if(sum == 30)
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