//Requirement:get floatThreenumber from user and  subtraction them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float subtractionThreeNumber(float a,float b,float c)
{
 return a-b-c;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
      printf("Enter your thirdnumber");
       float c=getNumberFromUser();
     float subtraction=subtractionThreeNumber(a,b,c);
    printf("Subtraction is%f",subtraction);

}
