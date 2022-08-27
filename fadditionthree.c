//Requirement:get floatThreenumber from user and  addition them print a console:
#include <stdio.h>
float  getNumberFromUser(){
float number;
scanf("%f",& number);
    return number;
}
float addThreeNumber(float a,float b,float c)
{
 return a+b+c;
}
void main() {
    printf("Enter your firstnumber");
    float a=getNumberFromUser();
    printf("Enter your secondnumber");
     float b= getNumberFromUser();
      printf("Enter your thirdnumber");
       float c=getNumberFromUser();
     float addition=addThreeNumber(a,b,c);
    printf("Addition is%f",addition);

}
