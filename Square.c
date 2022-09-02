// write a program to get square side from user and identify the area and circumference 
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int identifySquareArea(int a){
    return (a*a);
}
int identifyCircumference(int a) {
    return 4*(a*a);
}
int main() {
    printf("Enter your value ");
    int a= getNumberFromUser();
    int area=identifySquareArea(a);
    int perimeter= identifyCircumference(a);
    printf("Area is value %d\n",area);
    printf("Perimeter is value %d\n", perimeter);

    return 0;
}
