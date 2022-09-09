// get two float number user and add them print on console
#include<stdio.h>
float getNumberFromUser(){
    float number;
    scanf("%f",& number);
    return number;
}
float addTwoNumbers(float a,float b){
    return a+b;
}
void main(){
    printf("enter the first number ");
    float a=getNumberFromUser();
    printf("enter the second number ");
    float b=getNumberFromUser();
    float add=addTwoNumbers(a,b);
    printf("answer is %f",add);
}
