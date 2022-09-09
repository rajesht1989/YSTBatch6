// get two float number user and multiple them print on console
#include<stdio.h>
float getNumberFromUser(){
    float number;
    scanf("%f",& number);
    return number;
}
float multipleTwoNumbers(float a,float b){
    return a*b;
}
void main(){
    printf("enter the first number ");
    float a=getNumberFromUser();
    printf("enter the second number ");
    float b=getNumberFromUser();
    float multiple=multipleTwoNumbers(a,b);
    printf("answer is %f",multiple);
}
