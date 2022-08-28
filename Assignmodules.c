//Requirement: getnumber from user  Assignmentoperator  and   modules print a console:
#include<stdio.h>
int getNumberFromUser()
{
    int value1;
    scanf("%d",& value1);
    return value1;
}
int modulesTwoNumber(int value1,int value2)
{
    return (value1%=value2);
}
int main(){
    printf("Enter your firstnumber");
    int value1=getNumberFromUser();
    printf("Enter your secondnumber");
    int value2=getNumberFromUser();
    int modules= modulesTwoNumber(value1,value2);
    printf("modules is %d",modules);
   return 0;
    
}
