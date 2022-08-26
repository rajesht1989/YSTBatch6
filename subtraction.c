#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int subtractionTwoNumber(int a,int b)
{
 return a-b;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
     int subtraction=subtractionTwoNumber(a,b);
    printf("Subtraction is%d",subtraction);

}
