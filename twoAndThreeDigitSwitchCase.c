//get two digit and three digit in five use switch case and print the text
#include<stdio.h>
int getNumber(){
    int number;
    scanf("%d",& number);
    return number;
}
int identifyPrintText(int a){
 switch (a){
 case 21:
 printf("twenty one");
 break;
 case 22:
 printf("twenty two");
 break;
 case 23:
 printf("twenty three");
 break;
 case 24:
 printf("twenty four");
 break;
 case 25:
 printf("twenty five");
 break;
 case 300:
 printf("three hundred ");
 break;
 case 500:
 printf("five hundred");
 break;
 case 700:
 printf("seven hundred ");
 break;
 case 800:
 printf("eight hundred ");
 break;
 case 900:
 printf("nine hundred ");
 break;
 default:
 printf("none");
 break;
 }
}
void main(){
printf("ente the number ");
int a=getNumber();
identifyPrintText(a);
}
