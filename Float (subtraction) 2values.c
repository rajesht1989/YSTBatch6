// get float two number from user and subtraction them print it on console
#include<stdio.h>
float getTwoNumberFromUser() {
    float number;
    scanf ("%f",&number);
    return number;
}
float subtractionTwoNumber(float a,float b) {
    return a-b;
}
void main(){
    printf ("enter a first number");
     float a = getTwoNumberFromUser();
    printf ("enter a second number");
     float b = getTwoNumberFromUser();
    float subtraction = subtractionTwoNumber(a,b);
    printf ("Subtraction is %f",subtraction);
}
