// get number from user and identify the andgate operator to print it on console
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",&number);
return number;
}
int identifyAndgate (int a,int b,int c, int d){
    return (a==b)&&(c>=d)&&(a>c)&&(d<a);
}
int main () {
    printf ("enter a first value ");
    int a = getNumberFromUser();
    printf ("enter a second value ");
    int b = getNumberFromUser();
    printf (" enter a third value ");
    int c  = getNumberFromUser();
    printf ("enter a fourth value ");
    int d = getNumberFromUser();
    int AndLogic = identifyAndgate (a,b,c,d);
    printf ("value is%d", AndLogic);
}
