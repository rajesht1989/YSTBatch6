//write a program to get  from user the  for vote  on console
#include<stdio.h>
int getNumberFromUser(){
   int number;
scanf("%d",&number); 
return number;
}
int PrintCycle(int a){
    switch(a){
        case 1 ... 5:
        printf("born");
        break;
         case 6 ... 10:
        printf("play");
        break;
         case 11 ... 15:
        printf("school");
        break;
         case 20 ... 25:
        printf("colleage");
        break;
         case 26 ... 35:
        printf("married");
        break;
        case 45 ... 50:
        printf("have child");
        break;
        case 51 ... 55 :
        printf("child studiying");
        break;
        case 60 ... 70:
        printf("child colleage join");
        break;
        case 75 ... 80:
        printf("dad is human health failed");
        break;
        case 81 ... 100:
        printf("dad is death");
        break;
        default:
         printf(" none of data");
         break;
    }
}
void main(){
    printf("Enter the number ");
    int a=getNumberFromUser();
    PrintCycle(a);
}
