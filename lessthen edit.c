// write a program get number from user and identify number is lessthen in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
void identifyNumber(int a){
   if(a<100){
       printf(" number is greater then ");
   }else{
        printf(" number is less then ");
   }
}
void main(){
     printf("Enter the number");
     int a=getNumberFromUser();
     identifyNumber(a);
}
