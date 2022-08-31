#include<stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
    }
    int identifyAndGate(int a,int b,int c,int d){
        return (a>b)&&(c<d)&&(a<c)&&(b>d);
        }
        void main(){
            printf("Enter a first value ");
            int number1=getNumberFromUser();
             printf("Enter a second value ");
            int number2=getNumberFromUser();
             printf("Enter a third value ");
            int number3=getNumberFromUser();
             printf("Enter a foruth value ");
            int number4=getNumberFromUser();
            int AndLogic=identifyAndGate(number1,number2,number3,number4);
            printf("value is %d",AndLogic);
            }
