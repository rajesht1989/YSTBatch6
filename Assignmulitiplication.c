//Requirement: getnumber from user  Assignmentoperator  and   multiplication print a console:
#include<stdio.h>
int getNumberFromUser()
{
    int s;
    scanf("%d",& s);
    return s;
}
int multiplicationTwoNumber(int s,int t)
{
    return (s*=t);
}
int main(){
    printf("Enter your firstnumber");
    int s=getNumberFromUser();
    printf("Enter your secondnumber");
    int t=getNumberFromUser();
    int multiplication= multiplicationTwoNumber(s,t);
    printf("multiplication is %d",multiplication);
   return 0;
    
}
