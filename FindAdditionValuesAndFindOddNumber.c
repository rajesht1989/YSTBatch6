//write a program to get three number from user and add them find odd number print it on console.
#include <stdio.h>
int getNumberFromUser(){
    int k;
    scanf("%d",&k);
    return k;
}
int addThem(int a,int b,int c){
    return (a+b+c);
}
int checkOddNumber(int d){
    if (d % 2 == 0){
        printf ("its a odd number ");
    }
    else {
          printf ("its a not added ");
    }
}
int main() {
    printf("Enter a first number ");
    int number1 = getNumberFromUser();
     printf("Enter a second number ");
    int number2 = getNumberFromUser();
     printf("Enter a third number ");
    int number3 = getNumberFromUser();
    int addition = addThem(number1,number2,number3);
    printf ("addition value is %d\n ",addition);
    checkOddNumber(addition);
    return 0;
}
