// get three float number user and divided them print on console
#include<stdio.h>
float getNumberFromUser(){
    float number;
    scanf("%f",& number);
    return number;
}
float dividedTwoNumbers(float a,float b,float c){
    return a/b/c;
}
void main(){
    printf("enter the first number ");
    float a=getNumberFromUser();
    printf("enter the second number ");
    float b=getNumberFromUser();
    printf("enter the third number ");
    float c=getNumberFromUser();
    float divided=dividedTwoNumbers(a,b,c);
    printf("answer is %f",divided);
}
