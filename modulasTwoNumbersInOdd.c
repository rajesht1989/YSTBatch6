// write a program get two number from user and identify the modulas check if it is odd number
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyModulasTwoNumbers(int a,int b){
 return a%b;
}
int identifyTheOddNumbers(int d){
if (d%2!=0){
 printf("enter the odd number ");
}else{
  printf("enter the not odd number ");
}
}
void main(){
printf("enter the first number ");
int a=getNumberFromUser();
printf("ente the second number ");
int b=getNumberFromUser();
int modulas=identifyModulasTwoNumbers(a,b);
printf("answer is %d \n",modulas);
identifyTheOddNumbers(modulas);
}
