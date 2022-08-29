// requirement Realtional operators in and gate
#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifyandgate(int a,int b){
    return a&&b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int andgate=identifyandgate(a,b);
    printf("value is%d",andgate);
    return 0;
}
