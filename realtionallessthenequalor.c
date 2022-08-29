// requirement Realtional operators in lesstehn
#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifylessequalor(int a,int b){
    return a<=b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int lessequal=identifylessequalor(a,b);
    printf("value is%d",lessequal);
    return 0;
}
