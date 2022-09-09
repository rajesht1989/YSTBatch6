// write a program get number from in three number user logical operator and using colour code complication check in using
#include <stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyTheColours(int a,int b,int c){
if ((a==0)&&(b==0)&&(c==0)){
printf("enter the colour is black ");
}else if((a==255)&&(b==255)&&(c==255)){
printf("enter the colour is white ");
}else if((a==255)&&(b==0)&&(c==0)){
printf("enter the colour is red ");
}
}
void main(){
printf("enter the first number ");
int a=getNumberFromUser();
printf("enter the second number ");
int b=getNumberFromUser();
printf("enter the third number ");
int c=getNumberFromUser();
identifyTheColours(a,b,c);
}
