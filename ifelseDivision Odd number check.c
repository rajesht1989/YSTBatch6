// write programe to get twonumber from user division them and oddnumber check print on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyDivisionNumber(int a,int b){
    return a/b;
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
     int Division=identifyDivisionNumber(a,b);
     printf("Division is value %d\n",Division);
     findOutCheckOdd(Division);
}
