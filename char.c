#include<stdio.h>

char getLetterFromUser(){
    char letter;
    scanf("%c",&letter);
    return letter;
}
void main(){
    printf("Enter a letter ");
    char first = getLetterFromUser();
        printf("letter is %c",first);

}
