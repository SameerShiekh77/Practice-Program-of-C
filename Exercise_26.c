// Write a C program to check whether a character is an alphabet, digit or special character.

#include <stdio.h>
#include <conio.h>

int main(){

    char a;
    printf("Enter any number,alphabet or special Character: ");
    scanf("%c", &a);
    if((a >='a' && a<='z') || (a >='A' && a<='Z'))
    {
        printf("This is alphabate");
    }
    else if((a>= '0' && a<='9') || (a <= '0'))
    {
        printf("This is an integer");
    }
    else{
        printf("This is special Character");
    }
    


    getch();

}