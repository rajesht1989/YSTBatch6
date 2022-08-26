#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int multiplicationTwoNumber(int a,int b)
{
 return a*b;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
     int multiplication=multiplicationTwoNumber(a,b);
    printf("Multiplication is%d",multiplication);

}
