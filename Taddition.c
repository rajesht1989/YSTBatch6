//Requirement:get floatTwonumber from user and add them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float additionThreeNumber(float a,float b)
{
 return a+b;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
     float addition=additionThreeNumber(a,b);
    printf("Addition is%f",addition);

}
