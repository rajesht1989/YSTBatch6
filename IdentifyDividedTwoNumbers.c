#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",number);
return number;
}
int identifyDividedTwoNumbers(int a,int b){
    return a/b;
}
void main(){
    printf("enter the first number ");
    int a=getNumberFromUser();
    printf("enter the second number ");
    int b=getNumberFromUser();
    int divided=identifyDividedTwoNumbers(a,b);
    printf("value is %d", divided);
   }
