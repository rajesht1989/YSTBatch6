//check if the class of to sit with by getting the window in the class
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyTheClassWindows(int a){
 if (a>6){
 printf("free to sit");
 }else if(a>4){
  printf("better to sit");
 }else if(a>2){
  printf("ok to sit ");
 }else{
  printf("worst to sit ");
 }
}
void main(){
printf("enter the class windows ");
int a=getNumberFromUser();
identifyTheClassWindows(a);
}
