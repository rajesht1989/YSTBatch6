//write a program to get number from user and print human life cycle print it on console 
#include<stdio.h>
int getNumberFromUser(){
    int age;
    scanf("%d",& age);
    return age;
}
int identifyHumanLifeCycle(int a){
  switch (a){
  case 1 ... 4:
  printf(" pre kg to lkg" );
  break;
  case 5 ... 12 :
  printf("first standard to eight standard");
  break;
  case 13 ... 15:
  printf(" ninth standard to tenth standard");
  break;
  case 16 ... 17:
  printf(" eleventh standard to twelfth standard ");
  break;
  case 18 ... 19:
  printf("free time");
  break;
  case 20 ... 21:
  printf(" adult");
  break;
  case 22 ... 25:
  printf("college period ");
  break;
  case 26 ... 32:
  printf("searching for job ");
  break;
  case 33 ... 35:
  printf("earning money ");
  break;
  case 36 ... 100:
  default:
  printf(" travel period ");
  break;
  }
}
void main(){
 printf("enter the vote ");
 int a=getNumberFromUser();
 identifyHumanLifeCycle(a);
}
