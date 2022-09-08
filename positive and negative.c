// write a program to get a number from user and identify is postive or negative 
#include <stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyPostiveOrNegativeNumbers(int a){
 if(a>0){
     printf("positive number ");
 }
 else{
    printf("Negative number ");
 }}
 void main(){
 printf("enter the value ");
 int a=getNumberFromUser();
 identifyPostiveOrNegativeNumbers(a);
}
