// write programe to get twonumber from user Division them and evennumber check print on console
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyDivisionNumber(int a,int b){
    return a*b;
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
    int Division=identifyDivisionNumber(a,b);
        printf("Division value is %d\n",Division);
        findOutCheckEvenNumber(Division);

}
