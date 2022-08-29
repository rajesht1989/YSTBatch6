// requirement Realtional operators in not gate
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int identifyNotGate(int a,int b){
    return !(a<b);
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int notGate =identifyNotGate(a,b);
    printf("value is %d",notGate);
    return 0;
}
