//write a c program check wether a number is divisible by 5 and 11 or not
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",& number);
    return number;
}
void identifyDivision(int a){
    if ((a%5==0)&&(a%11==0)){
    printf("this is division 5 ");
//else if (a%11==0){
  //  printf(" this value is divided by 11 ");
}    
else{
    printf("this is not division ");
}
}
void main(){
    printf("enter the number ");
    int a=getNumberFromUser();
    identifyDivision(a);
}
