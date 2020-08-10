// 20. Write a C program to calculate the root of a Quadratic Equation.

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {

    int a, b, c, D;
    printf("Input value of a: ");
    scanf("%d", &a);
    printf("Input value of b: ");
    scanf("%d", &b);
    printf("Input value of c: ");
    scanf("%d", &c);
    D = b * b - 4 * a* c;
    float x1 = (-b + sqrt(D))/(2*a);
    float x2 = (-b - sqrt(D))/(2*a);
	printf("\n\n=====OUTPUT======\n\n");
    if (D == 0)
    {
        printf("Both roots are equal.\n");
        printf("First  Root Root1= %.2f\n", x1);
        printf("Second Root Root2= %.2f\n", x2);
    }
    else if (D > 0)
    {
        printf("Both roots are real and diff-2\n");
        printf("First  Root Root1= %.2f\n", x1);
        printf("Second Root Root2= %.2f\n", x2);
        
    }
    else if(D < 0) {
        printf("Root are imeainary;\nNo Solution. \n");
        
    }
    return 0;
    getch();

}


