#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyModulasTwoNumbers(int a,int b){
    return a%b;
}
int main(){
    printf("enter the first number ");
    int a=getNumberFromUser();
    printf("enter the second number ");
    int b=getNumberFromUser();
    int modulas=identifyModulasTwoNumbers(a,b);
    printf("modulas is %d",modulas);
}
