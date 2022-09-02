// get three number from user and division them print it on console
#include<stdio.h>
int getThreeNumberFromUser() {
    int number;
    scanf ("%d",&number);
    return number;
}
int divisionThreeNumber(int a,int b, int c) {
    return a/b/c;
}
void main(){
    printf ("enter a first number");
     int a = getThreeNumberFromUser();
    printf ("enter a second number");
     int b = getThreeNumberFromUser();
    printf ("enter a third number");
     int c = getThreeNumberFromUser();
    int division = divisionThreeNumber(a,b,c);
    printf ("Division is %d",division);
}
