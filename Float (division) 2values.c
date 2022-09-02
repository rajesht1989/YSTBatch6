// get float two number from user and division them print it on console
#include<stdio.h>
float getTwoNumberFromUser() {
    float number;
    scanf ("%f",&number);
    return number;
}
float divisionTwoNumber(float a,float b) {
    return a/b;
}
void main(){
    printf ("enter a first number");
     float a = getTwoNumberFromUser();
    printf ("enter a second number");
     float b = getTwoNumberFromUser();
    float division = divisionTwoNumber(a,b);
    printf ("Division is %f",division);
}
