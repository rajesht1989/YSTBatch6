// write programe to get twonumber from user addition them and evennumber check print on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyAddNumber(int a,int b){
    return a+b;
}
int findOutCheckEvenNumber(number){
    if(number%2==0){
        printf("Number is Even");
    }else{
         printf("Number is notEven");
    }
}
void main(){
    printf("Enter the first number ");
    int a=getNumberFromUser();
    printf("Enter the second number ");
    int b=getNumberFromUser();
     int addition=identifyAddNumber(a,b);
     printf("Addition is value %d\n",addition);
     findOutCheckEvenNumber(addition);
}
