// write a program get number from user and identify number is >10 0r <20 check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
void identifyNumber(int a){
  if((a>10)&&(a<20)){
    printf("The given number is correct ");
  }else{
        printf("The given number is not correct");
   } 
  }
    void main(){
    printf("Enter a number ");
    int a=getNumberFromUser();
   identifyNumber(a);
}
