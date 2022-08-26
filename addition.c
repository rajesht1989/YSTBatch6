#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int addTwoNumber(int a,int b)
{
 return a+b;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
     int addition=addTwoNumber(a,b);
    printf("Addition is%d",addition);

}
