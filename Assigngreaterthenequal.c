// requirement Realtional operators in greaterthen or equal
#include <stdio.h>
int getNumberFromUser(){
    int x;
    scanf("%d",&x);
    return x;
}
int identifygreaterthenequal(int a,int b){
    return a>=b;
}
int main(){
    printf("Enter your firstnumber ");
    int a=getNumberFromUser();
     printf("Enter your secondnumber ");
    int b=getNumberFromUser();
    int greaterthenequal=identifygreaterthenequal(a,b);
    printf("value is%d",greaterthenequal);
    return 0;
}
