// write programe to get twonumber from usersubtraction them and oddnumber check print on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyAddNumber(int a,int b){
    return a-b;
}
int findOutCheckOdd(number){
    if(number%2!=0){
        printf("Number is Odd");
    }else{
         printf("Number is notOdd");
    }
}
void main(){
    printf("Enter the first number ");
    int a=getNumberFromUser();
    printf("Enter the second number ");
    int b=getNumberFromUser();
     int subtraction=identifyAddNumber(a,b);
     printf("subtraction is value %d\n",subtraction);
     findOutCheckOdd(subtraction);
}
