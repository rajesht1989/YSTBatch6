// get number from user and identify the preincrement & postincrement & predecrement & postdecremen to print it on console
#include<stdio.h>
int getNumberFromUser(){
int number;
scanf("%d",&number);
return number;
}
int identifyThePreIncrement (int a){
    printf ("on the line %d \n", ++a);
    printf ("after the line%d \n", a);
}
int identifyThePostIncrement (int a){
    printf ("on the line %d \n", a++);
    printf ("after the line %d \n", a);
}
int identifyThePreDecrement (int a){
    printf ("on the line %d \n", --a);
    printf ("after the line %d \n", a);
}
int identifyThePostDecrement (int a){
    printf ("on the line %d \n", a--);
    printf ("after the line %d \n", a);
}
int main () {
    printf (" enter a number ");
    int a = getNumberFromUser();
        identifyThePreIncrement(a);
        identifyThePostIncrement(a);
        identifyThePreDecrement(a);
        identifyThePostDecrement(a);
        return 0;
}
