// get float three number from user and multiplication them print it on console
#include<stdio.h>
float getThreeNumberFromUser() {
    float number;
    scanf ("%f",&number);
    return number;
}
float multiplicationThreeNumber(float a,float b,float c) {
    return a*b*c;
}
void main(){
    printf ("enter a first number");
     float a = getThreeNumberFromUser();
    printf ("enter a second number");
     float b = getThreeNumberFromUser();
     printf ("enter a third number");
     float c = getThreeNumberFromUser ();
    float multiplication = multiplicationThreeNumber(a,b,c);
    printf ("Multiplication is %f",multiplication);
}
