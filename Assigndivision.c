//Requirement: getnumber from user  Assignmentoperator  and   division print a console:
#include<stdio.h>
int getNumberFromUser()
{
    int number1;
    scanf("%d",& number1);
    return number1;
}
int divisionTwoNumber(int number1,int number2)
{
    return (number1/=number2);
}
int main(){
    printf("Enter your firstnumber");
    int number1=getNumberFromUser();
    printf("Enter your secondnumber");
    int number2=getNumberFromUser();
    int division= divisionTwoNumber(number1,number2);
    printf("division is %d",division);
   return 0;
    
}
