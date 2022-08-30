#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyRelationalOperator(int a,int b){
    return a<=b;
}
int main(){
    printf("enter the first value ");
    int a=getNumberFromUser();
    printf("enter the second value ");
    int b=getNumberFromUser ();
    int greaterthan=identifyRelationalOperator(a,b);
    printf("relation is %d", greaterthan);
}
