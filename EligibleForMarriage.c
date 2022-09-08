// get a age from user and check the if is eligible for marriage 
#include <stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyEligibleForMarriage(int a){
if (a>21){
printf("this is for eligible marriage ");
}else if(a<18){
 printf("this is a adult age");
}else{
    printf("this is never eligible marriage");
}}
void main(){
printf("enter the eligible ");
int a=getNumberFromUser();
identifyEligibleForMarriage(a);
}
