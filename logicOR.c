// requirement Realtional operators in or gate
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int identifyOrGate(int a,int b){
    return (a<b)||(a>b);
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int orGate =identifyOrGate(a,b);
    printf("value is %d",orGate);
    return 0;
}
