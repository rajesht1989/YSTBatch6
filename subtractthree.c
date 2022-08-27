// Requirement : get Threenumber from user and subtraction them print a console;
#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int subtractionThreeNumber(int a,int b,int c)
{
 return a-b-c;
}
void main() {
    printf("Enter your firstnumber");
     int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
    printf("Enter your thirdnumber");
    int c= getNumberFromUser();
     int subtraction=subtractionThreeNumber(a,b,c);
    printf("Subtraction is%d",subtraction);

}
