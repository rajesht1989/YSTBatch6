// requirement Realtional operators in and gate
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int identifyAndGate(int a,int b){
    return (a>b)&&(a>b);
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int andGate =identifyAndGate(a,b);
    printf("value is %d",andGate);
    return 0;
}
