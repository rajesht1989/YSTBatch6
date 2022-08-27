//Requirement:get floatTwonumber from user and  multiplication them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float multiplicationTwoNumber(float a,float b)
{
 return a*b;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
     float multiplication=multiplicationTwoNumber(a,b);
    printf("Multiplication is%f",multiplication);

}
