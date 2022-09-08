//get a three number from user in multiplication and identify the odd number
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",& number);
return number;
}
int identifyMultipleThreeNumbers(int a,int b,int c){
 return a*b*c;
}
int identifyOddOrEvenNumber(int d){
 if (d%2!=0){
     printf("enter the odd number ");
 }else if(d%2==0){
     printf("enter the even number ");
 }else{
   printf("this is not odd number ");
}}
void main(){
 printf("enter the first number ");
 int a=getNumberFromUser();
 printf("enter the second number ");
 int b=getNumberFromUser();
 printf("enter the third number ");
 int c=getNumberFromUser();
 int multiplication=identifyMultipleThreeNumbers(a,b,c);
 printf("the number is %d\n", multiplication);
 identifyOddOrEvenNumber(multiplication);
}
