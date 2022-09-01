#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyLogicalGate(int a,int b,int c,int d){
    return (a>b)&&(b>=c)&&(a>c)&&(d!=a);
}
void main(){
    printf("enter the first value ");
    int a=getNumberFromUser();
    printf("enter the second value ");
    int b=getNumberFromUser();
    printf("enter the third value ");
    int c=getNumberFromUser();
    printf("Enter a fourth value ");
    int d = getNumberFromUser();
    int Logical=identifyLogicalGate(a,b,c,d);
    printf("logical is %d",Logical);
}
