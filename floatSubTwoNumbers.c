// get two float number user and sub them print on console
#include<stdio.h>
float getNumberFromUser(){
    float number;
    scanf("%f",& number);
    return number;
}
float subTwoNumbers(float a,float b){
    return a-b;
}
void main(){
    printf("enter the first number ");
    float a=getNumberFromUser();
    printf("enter the second number ");
    float b=getNumberFromUser();
    float sub=subTwoNumbers(a,b);
    printf("answer is %f",sub);
}
