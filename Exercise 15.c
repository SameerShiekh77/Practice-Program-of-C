// 15. Write a C program to accept the height of a person in centimeter and categorize the person according to their height

#include <stdio.h>
#include <conio.h>

int main(){

    int height;
    printf("Enter your height in centimeter: ");
    scanf("%d", &height);
    if(height>0 && height<=150)
    {
        printf("The person is Dwarf");
    }
    else if(height>=151 && height<=165)
    {
        printf("The person is Average");
    }
    else if(height>=165 && height<=175)
    {
        printf("The person is Tall");
    }


    return 0;
    getch();

}