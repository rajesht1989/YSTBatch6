#include <stdio.h>
int getNumberFromUser(){
int number;
//printf("Enter a number ");
scanf("%d",& number);
return number;
}
void identifyPreIncrement(int x){
    printf("on the line %d\n",++x);
    printf("after the line %d\n",x);
}
void identifyPostIncrement(int x){
    printf("on the line %d\n",x++);
    printf("after the line %d\n",x);
    }
    void identifyPreDecrement(int x){
     printf("on the line %d\n",--x);
     printf("after the line %d\n",x);
    }
    void identifyPostDecrement(int x){
        printf("on the line %d\n",x--);
        printf("after the line %d\n",x);
    }
void main(){
    printf("Enter a number ");
int x=getNumberFromUser();
identifyPreIncrement(x);
identifyPostIncrement(x);
identifyPreDecrement(x);
identifyPostDecrement(x);
}
