#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyPostDecrement(int a){
    printf("on the line %d \n",a--);
    printf("after the line %d",a);
    return a;
}
int main(){
    printf("enter a value ");
    int a=getNumberFromUser();
    int postDecrement=identifyPostDecrement(a);
    return 0;
}
