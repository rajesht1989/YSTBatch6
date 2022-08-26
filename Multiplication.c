// Requirement : get Threenumber from user and multiplication them print a console;
#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int multipicationThreeNumber(int a,int b,int c)
{
 return a*b*c;
}
void main() {
    printf("Enter your firstnumber");
     int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
    printf("Enter your thirdnumber");
    int c= getNumberFromUser();
     int multiplication= multipicationThreeNumber(a,b,c);
    printf("Multiplication is%d",multiplication);

}
