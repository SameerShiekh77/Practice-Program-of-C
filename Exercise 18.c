// 18. Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>
#include <conio.h>

int main(){

    int x,y;
    printf("Enter value of x cordinate: ");
    scanf("%d", &x);
    printf("Enter value of y cordinate: ");
    scanf("%d", &y);

    printf("\n==========OUTPUT==========\n\n");
    if(x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant\n", x,y);
    }
    else if(x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant\n", x,y);
    }
    else if(x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Third quadrant\n", x,y);
    }
    else if(x > 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant\n", x,y);
    }


    return 0;
    getch();

}