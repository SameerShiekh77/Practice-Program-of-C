// 17. Write a C program to find the largest of three numbers. 

#include <stdio.h>
#include <conio.h>

int check(int a, int b, int c)
{
    if(a > b && a > c)
    {
        printf("The 1st Number is the greatest among them\n");
    }
    else if(b > a && b > c)
    {
        printf("The 2nd Number is the greatest among them\n");
    }
    if(c > b && c > a)
    {
        printf("The 3rd Number is the greatest among them\n");
    }
}

int main(){

    int n1,n2,n3;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    printf("====OUTPUT====\n\n1st Number is = %d\t2nd Number is = %d\t3rd Number is = %d\n\n",n1,n2,n3);
    check(n1,n2,n3);

    return 0;
    getch();

}