//write a c program to find maximum between two numbers
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",& number);
    return number;
}
void identifyMaximumNumber(int a,int b){
    if(a>b){
        printf("the a is maximum between b");
        }else if(b>a){
        printf("the b is maximum between a");
        }else{
            printf("this is equal");
        }
}
void main(){
    printf("enter the a value ");
    int a=getNumberFromUser();
    printf("enter the b value ");
    int b=getNumberFromUser();
    identifyMaximumNumber(a,b);
}
