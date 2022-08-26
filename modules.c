#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int modulusTwoNumber(int a,int b)
{
 return a%b;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
     int modulus=modulusTwoNumber(a,b);
    printf("Modulus is%d",modulus);

}
