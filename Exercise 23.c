//23. Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and grade.

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{

    int rollNo,total = 600;
    float percentage, CS, Cal, Isl, FOP, BE, ITC, OM;
    char name[30];
    printf("Enter Your Name: ");
    scanf("%s", &name);
    printf("Enter Your Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Marks of Communication Skill: ");
    scanf("%f", &CS);
    printf("Enter Marks of Calculas: ");
    scanf("%f", &Cal);
    printf("Enter Marks of Fundamental Of Programming: ");
    scanf("%f", &FOP);
    printf("Enter Marks of Islamiat: ");
    scanf("%f", &Isl);
    printf("Enter Marks of Basic Electronics: ");
    scanf("%f", &BE);
    printf("Enter Marks of Introduction Of Computer: ");
    scanf("%f", &ITC);
    OM = CS + Cal + FOP + Isl + BE + ITC;
    percentage = (OM / total) * 100;
    printf("\n\t\t\t============MARKSHEET RESULT==============\n\n");
    printf("Student Name: %c\n", name);
    printf("Roll No: %d\n", rollNo);
    printf("Marks in Communication Skill: %.1f\n", CS);
    printf("Marks in Calculas: %.1f\n", Cal);
    printf("Marks in Fundamental Of Programmin: %.1f\n", FOP);
    printf("Marks in Islamiat: %.1f\n", Isl);
    printf("Marks in Basic Electronics: %.1f\n", BE);
    printf("Marks in Introduction of Computer: %.1f\n", ITC);
    printf("Total Marks: %d\n", total);
    printf("Obtained Marks: %.1f\n", OM);
    printf("Percentage: %.1f\n", percentage);
    if (percentage >= 80 && percentage >70)
    {
        printf("Grade: A++");
    }
    else if (percentage >= 70 && percentage >60)
    {
        printf("Grade: A");
    }
    else if (percentage >= 60 && percentage >50)
    {
        printf("Grade: B");
    }
    else if (percentage >= 50 && percentage >40)
    {
        printf("Grade: C");
    }
    else if (percentage >= 40 && percentage >30)
    {
        printf("Grade: D");
    }
    else if (percentage >= 30 && percentage >35)
    {
        printf("Grade: E");
    }
    else 
    {
        printf("Fail");
    }

    return 0;
    getch();
}
