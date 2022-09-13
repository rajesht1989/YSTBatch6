//get a number from user and find a prime number with using in if else condition 
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",& number);
    return number;
}
void identifyPrimeNumber(int a){
 if (a==1||a==2||a==3||a==5||a==7||a==11||a==13||a==15||a==17||a==19){
   printf("this is prime number ");
 }else{
     printf("this is not prime number ");
}
 }
    void main(){
    printf("enter the number ");
    int a=getNumberFromUser();
    identifyPrimeNumber(a);
    }
