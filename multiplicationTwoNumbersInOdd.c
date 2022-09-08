// get a two number from user in multiplication and identify the odd number
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyMultipleTwoNumbers(int a,int b){
 return a*b;
}
int identifyOddNumber(int d){
 if (d%2!=0){
     printf("enter the odd number ");
 }else{
   printf("this is not odd number ");
}}
void main(){
 printf("enter the first number ");
 int a=getNumberFromUser();
 printf("enter the second number ");
 int b=getNumberFromUser();
 int multiplication=identifyMultipleTwoNumbers(a,b);
 printf("the number is %d\n", multiplication);
 identifyOddNumber(multiplication);
}
