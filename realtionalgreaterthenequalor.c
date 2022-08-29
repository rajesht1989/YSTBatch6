// requirement Realtional operators in greaterthenequalor
#include <stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
int identifygreaterequalor(int a,int b){
    return a>=b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int greaterequal=identifygreaterequalor(a,b);
    printf("value is%d",greaterequal);
    return 0;
}
