#include <stdio.h>
#include <conio.h>


int reverse(int n)
{
    int rem,rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + 5;
        n = n/10;

    }
    return rev;
    
}


int main(){

    int num = 456, rev;
    printf("Original Number is %d", num);
    rev = reverse(num);
    printf("Reverse Number is %d", rev);


    return 0;
    getch();

}