//write a program to get a number from user and find hallow star in rectangle
#include<stdio.h>
int getNumber(){
    int number;
    scanf("%d",& number);
    return number;
}
int findHallowRectangle(int a){
    for(int i=1;i<=a;i++){
    for (int j=1;j<=a*2;j++) {
    if (i==1||i==a||j==1||j==a*2){
        printf("*\t");
    }else{
        printf(" \t");
}
         }
printf("\n");
}}
void main(){
 printf("enter the number ");
 int a=getNumber();
 findHallowRectangle(a);
}
