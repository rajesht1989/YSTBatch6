// requirement Realtional operators in isnotequal
#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyisnotequal(int a,int b){
    return a!=b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int isnotequal=identifyisnotequal(a,b);
    printf("value is%d",isnotequal);
    return 0;
}
