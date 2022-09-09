// get two float number user and divided them print on console
#include<stdio.h>
float getNumberFromUser(){
    float number;
    scanf("%f",& number);
    return number;
}
float dividedTwoNumbers(float a,float b){
    return a/b;
}
void main(){
    printf("enter the first number ");
    float a=getNumberFromUser();
    printf("enter the second number ");
    float b=getNumberFromUser();
    float divided=dividedTwoNumbers(a,b);
    printf("answer is %f",divided);
}
