//Right Angle Triangle Star Pattern

#include <stdio.h>
#include <conio.h>

int main(){

    int i,j,row;
    printf("How Many Rows to Print of Star pattern?\n");
    scanf("%d", &row);
    for(i=1;i<=row;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    getch();

}