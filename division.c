#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int divisionTwoNumber(int a,int b)
{
 return a/b;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
     int division=divisionTwoNumber(a,b);
    printf("Division is%d",division);

}
