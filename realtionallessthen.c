// requirement Realtional operators in lessthen
#include <stdio.h>
int getNumberFromUser(){
    int x;
    scanf("%d",&x);
    return x;
}
int identifylessthen(int a,int b){
    return a<b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int less=identifylessthen(a,b);
    printf("value is%d",less);
    return 0;
}
