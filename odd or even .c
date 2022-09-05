// write a program get number from user and identify number odd or even check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyNumber(int a){
    if(a%2==0){
        printf("identify number is even");
        
    }else{
        printf("identify number is odd"); 
    }
}
void main(){
     printf("Enter a number ");
     int number = getNumberFromUser();
     identifyNumber(number);
}
