//Requirement:get floatTwonumber from user and  division them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float divisionTwoNumber(float a,float b)
{
 return a/b;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
     float division=divisionTwoNumber(a,b);
    printf("Division is%f",division);

}
