//Requirement:get floatTwonumber from user and subtraction them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float subtractionTwoNumber(float a,float b)
{
 return a-b;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
     float subtraction=subtractionTwoNumber(a,b);
    printf("Subtraction is%f",subtraction);

}
