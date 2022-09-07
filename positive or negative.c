// write programe to get number from user positive and negative print on console
#include <stdio.h>
int getNumberfromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
void identifyPositiveNegativeAndNetural(int a){
if(a>0){
    printf("Number is positive");
}else if(a<0){
    printf("Number is negative");
}else{
     printf("Number is Neutral");
}
    }

void main (){
    printf("Enter a number ");
    int a = getNumberfromUser();
identifyPositiveNegativeAndNetural(a);
   
}
