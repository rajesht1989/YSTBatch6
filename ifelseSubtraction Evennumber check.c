// write programe to get twonumber from user subtraction them and evennumber check print on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifySubtractionNumber(int a,int b){
    return a-b;
}
int findOutCheckEvenNumber(int number){
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
    int Subtraction=identifySubtractionNumber(a,b);
        printf("Subtraction value is %d\n",Subtraction);
        findOutCheckEvenNumber(Subtraction);

}
