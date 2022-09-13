// write a program to get number from user and identify the divisable by 10.
#include<stdio.h>
int getNumberFromUser (){
    int number;
    scanf ("%d",&number);
    return number;
}
int identifyDivisableBy (int a){
    if (a%10==0){
      printf("The value is Divisible");
    }else{
    printf("The value is not Divisible");
    }}
    void main(){
    printf("enter a number ");
    int a = getNumberFromUser();
    identifyDivisableBy(a);
    }
