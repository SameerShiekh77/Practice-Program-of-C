//Reverse Star Pattern

#include <stdio.h>
#include <conio.h>

int main(){

    int row;
    printf("How many row to print of Star Pattern?\n");
    scanf("%d", &row);
    printf("\n========REVERSE STAR PATTERN============\n");
    for(int i=1;i<=row;i++)
    {
        for(int j=row;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    getch();

}
