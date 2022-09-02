// get float two number from user and add them print it on console
#include<stdio.h>
float getTwoNumberFromUser() {
    float number;
    scanf ("%f",&number);
    return number;
}
float addTwoNumber(float a,float b) {
    return a+b;
}
void main(){
    printf ("enter a first number");
     float a = getTwoNumberFromUser();
    printf ("enter a second number");
     float b = getTwoNumberFromUser();
    float addition = addTwoNumber(a,b);
    printf ("Addition is %f",addition);
}
