#include <stdio.h>
int getNumberFromUser(){
 int number;
 scanf("%d",& number);
 return number;
}
int identifyLargestNumber(int a,int b){
  if (a>b){
 printf("a largest numbers ");
  }else{
printf("b largest numbers ");
}}
void main(){
printf("enter the a value ");
int a=getNumberFromUser();
printf("enter the b value ");
int b=getNumberFromUser();
identifyLargestNumber(a,b);

}
