#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",& number);
    return number;
}
int identifyLogicalGate(int a,int b,int c,int d){
    return (a>=b)||(b!=c)||(c==d)||(d>=a);
}
void main(){
    printf("enter the first value ");
    int a=getNumberFromUser();
    printf("enter the second value ");
    int b=getNumberFromUser();
    printf("enter the third value ");
    int c=getNumberFromUser();
    printf("enter the fourth value ");
    int d=getNumberFromUser();
    int OR=identifyLogicalGate(a,b,c,d);
    printf("Logical Gate is %d",OR);
}
