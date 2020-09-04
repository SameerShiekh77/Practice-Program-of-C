// Star Pattern 3 

#include <stdio.h>
#include <conio.h>

int main()
{
    int row;
    printf("How many row of star pattern to print?\n");
    scanf("%d", &row);

    for(int i = 0 ; i<row; i++)
    {
        for(int j = 0 ; j<row; j++)
        {
            if(i+j>row-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}
