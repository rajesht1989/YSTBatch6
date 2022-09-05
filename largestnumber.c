// write a program get number from user and identify number is largestnumber check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
void identifyNumber(int a ,int b){
    if(a>b){
        printf("a is largest number ");
    }else{
         printf("b is largest number ");
    }
}
void main(){
    printf("Enter A number ");
    int a=getNumberFromUser();
     printf("Enter B number ");
    int b=getNumberFromUser();
    
    identifyNumber(a,b);
}
