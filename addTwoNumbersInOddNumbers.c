// get a two number from user add them  identify if it is and odd number. 
#include<stdio.h>
int getTwoNumberFromUser (){
    int number;
    scanf ("%d",&number);
    return number;
}
int identifyAddTwoNumbers(int a,int b){
    return a+b;
}
int identifyTheOddNumber(int c){
 if (c%2!=0){
 printf ("The given number is odd");
 }else{
 printf ("The given number is not odd");
 }}
 void main (){
 printf ("enter a first number ");
int a = getTwoNumberFromUser();
printf ("enter a second number ");
int b = getTwoNumberFromUser();
int addition = identifyAddTwoNumbers(a,b);
printf("Addition is %d\n",addition);
identifyTheOddNumber(addition);
}
