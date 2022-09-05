//get a number from user identity the greaterthan and lesserthan.c
#include <stdio.h>
int getNumberFromUser(){
 int number;
 scanf("%d",& number);
 return number;
}
int identifyGreaterthanAndLesserthan(int a){
  if ((a>10)&&(a<20)){
printf("A is greaterthan ten ");
}else{
printf("A lesserthan twenty ");
}}
void main(){
printf("enter the A value  ");
int a=getNumberFromUser();
printf("enter the B value ");
int b=getNumberFromUser();
identifyGreaterthanAndLesserthan(a);
}
