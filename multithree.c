//Requirement:get floatThreenumber from user and  multiplication them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float multiplicationThreeNumber(float a,float b,float c)
{
 return a*b*c;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
      printf("Enter your thirdnumber");
       float c=getNumberFromUser();
     float multiplication=multiplicationThreeNumber(a,b,c);
    printf("Multiplication is%f",multiplication);

}
