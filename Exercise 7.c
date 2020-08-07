// Find Smallest Number in Array
#include <stdio.h>
#include <conio.h>

int ReturnMin(int array[], int n)
{
    int min = 100;
    for (int i = 0; i < n; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {5,29,56,3,15,4,8,26,98,22};
    int min = ReturnMin(arr, 10);
    printf("The Minimum Number in Array is: %d", min);

    return 0;
    getch();
}
