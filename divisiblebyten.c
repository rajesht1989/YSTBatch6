// write a program get number from user and identify number divisiblebyten check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyNumber(int a){
    if(a%10==0){
        printf("identify number is divisible by ten");
        
    }else{
        printf("identify number is notdivisible by ten"); 
    }
}
void main(){
     printf("Enter a number ");
     int number = getNumberFromUser();
     identifyNumber(number);
}
