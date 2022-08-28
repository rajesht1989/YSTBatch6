//Requirement: getnumber from user  Assignmentoperator  and   add print a console:
#include<stdio.h>
int getNumberFromUser()
{
    int a;
    scanf("%d",& a);
    return a;
}
int addTwoNumber(int a,int b)
{
    return (a+=b);
}
int main(){
    printf("Enter your firstnumber");
    int a=getNumberFromUser();
    printf("Enter your secondnumber");
    int b=getNumberFromUser();
    int addition=addTwoNumber(a,b);
    printf("%d",addition);
   return 0;
    
}
