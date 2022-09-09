//get below 20 numbers from user and print it on text the number print it on console
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyNumberIntoLetters(int a ){
if (a==1){
 printf(" one ");
}else if(a==2){
    printf("two ");
}else if(a==3){
    printf(" three ");
}else if(a==4){
 printf(" four ");
}else if(a==5){
printf(" five ");
}else if(a==6){
 printf("six ");
}else if(a==7){
 printf("seven ");
}else if(a==8){
 printf(" eight ");
}else if(a==9){
 printf(" nine ");
}else if (a==10){
printf("ten ");
}
}
void main(){
printf("enter the letter ");
int a=getNumberFromUser();
identifyNumberIntoLetters(a);
}
