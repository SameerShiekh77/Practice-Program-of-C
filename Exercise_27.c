    // Write a C program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>
#include <conio.h>

int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch =='o' || ch=='u')
    {
        printf("%c is a vowel", ch);
    }
    else{
        printf("%c is a consonant" ,ch);
    }

    return 0;
    getch();

}