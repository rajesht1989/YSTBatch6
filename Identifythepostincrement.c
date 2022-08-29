#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyPostIncrement(int a){
printf("before the line %d\n",a++);
printf("after the line %d\n",a);
return a;
}
int main(){
    printf("enter a value ");
    int a=getNumberFromUser();
    int add=identifyPostIncrement(a);
    return 0;
}
