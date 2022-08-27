// Requirement : get Threenumber from user and division them print a console;
#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int divisionThreeNumber(int a,int b,int c)
{
 return a/b/c;
}
void main() {
    printf("Enter your firstnumber");
     int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
    printf("Enter your thirdnumber");
    int c= getNumberFromUser();
     int division= divisionThreeNumber(a,b,c);
    printf("Division is%d",division);

}
