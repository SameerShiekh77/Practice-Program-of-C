//19. Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=180
// or
// Total in Math and Physics >=140

#include <stdio.h>
#include <conio.h>

int main() {

    int math, phy, chem, total = 300;
    printf("Enter Math Marks: \n");
    scanf("%d", &math);
    printf("Enter Physics Marks: \n");
    scanf("%d", &phy);
    printf("Enter Chemsitry Marks: \n");
    scanf("%d", &chem);

    if (math >= 65 && phy >=55 && chem >=50 && total >= 180 && (math + phy) >=140 )
    {
        printf("The candidate is eligible for admission");
    }
    else
    {
        printf("The candidate is not eligible for admission");

    }



    return 0;
    getch();

}