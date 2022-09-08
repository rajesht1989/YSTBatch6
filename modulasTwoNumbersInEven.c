// write a program get two number from user and identify the modulas check if it is even number
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyModulasTwoNumbers(int a,int b){
 return a%b;
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
int modulas=identifyModulasTwoNumbers(a,b);
printf("answer is %d \n",modulas);
identifyTheEvenNumbers(modulas);
}
