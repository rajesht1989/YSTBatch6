// write a program get two number from user and identify the subtraction check if it is even number
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifySubtractionTwoNumbers(int a,int b){
 return a-b;
}
int identifyTheEvenNumbers(int d){
if (d%2==0){
 printf("enter the even number ");
}else{
  printf("enter the not even number ");
}
}
void main(){
printf("enter the first number ");
int a=getNumberFromUser();
printf("ente the second number ");
int b=getNumberFromUser();
int subtract=identifySubtractionTwoNumbers(a,b);
printf("answer is %d \n",subtract);
identifyTheEvenNumbers(subtract);
}
