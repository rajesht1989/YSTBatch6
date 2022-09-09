//get below 20 numbers from user and print it on text the number print it on console
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyNumberIntoLetters(int a ){
if (a==1){
 printf("enter the letter one ");
}else if(a==2){
    printf("enter the letter two ");
}else if(a==3){
    printf("enter the letter three ");
}else if(a==4){
 printf("enter the letter four ");
}else if(a==5){
printf("enter the letter five ");
}else if(a==6){
 printf("enter the letter six ");
}else if(a==7){
 printf("enter the letter seven ");
}else if(a==8){
 printf("enter the letter eight ");
}else if(a==9){
 printf("enter the letter nine ");
}else if (a==10){
printf("enter the letter ten ");
}
}
void main(){
printf("enter the letter ");
int a=getNumberFromUser();
identifyNumberIntoLetters(a);
}
