// get a number from user and find out eligible for vote in if else conditio.c
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int identifyEligibleForVote(int a){
 if (a>50){
printf("boomer uncle ");
}else if(a<18){
printf("go to watch the chutti tv ");
}else{
    printf("eligible for vote ");
 }}
 void main(){
  printf("enter the value ");
  int a=getNumberFromUser();
  identifyEligibleForVote(a);
   }
