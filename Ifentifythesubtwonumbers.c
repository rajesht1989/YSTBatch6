#include <stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",number);
return number;
}
int identifySubTwoNumbers(int a,int b){
    return a-b;
}
void main(){
    printf("enter the first number ");
    int a=getNumberFromUser();
    printf("enter thr second number ");
    int b=getNumberFromUser();
    int sub=identifySubTwoNumbers(a,b);
    printf("value is %d", sub);
   }
