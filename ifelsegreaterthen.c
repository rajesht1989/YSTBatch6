// write a program get number from user and identify number is greaterthen in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
void identifyNumber(int a){
    if(a>5){
        printf("number is greater then ");
    }else{
       printf(" value is less then ");
        
    }
}
void main(){
     printf("Enter the number");
   int a=getNumberFromUser();
 identifyNumber(a);
}
