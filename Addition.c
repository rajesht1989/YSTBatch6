get three number from user and add them print a console:
#include <stdio.h>
int  getNumberFromUser(){
int number;
scanf("%d",& number);
    return number;
}
int additionThreeNumber(int a,int b,int c)
{
 return a+b+c;
}
void main() {
    printf("Enter your firstnumber");
    int a= getNumberFromUser();
    printf("Enter your secondnumber");
     int b= getNumberFromUser();
      printf("Enter your thirdnumber");
    int c= getNumberFromUser();
     int addition=additionThreeNumber(a,b,c);
    printf("Addition is%d",addition);

}
