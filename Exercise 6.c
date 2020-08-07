// Find Largest Number in Array

#include <stdio.h>
#include <conio.h>

int ReturnMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;   
    
}
int main(){

    int arr[] = {5,589,564,789,71596,4,458208,26,989,48};
    int max = ReturnMax(arr, 10);
    printf("The Maximum Number in Array is: %d", max);

    return 0;
    getch();
 }
