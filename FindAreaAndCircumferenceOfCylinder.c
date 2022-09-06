// writw a programe to get number from user and identify area and circumference of rectangle
#include <stdio.h>
int getNumberFromUser(){
    int i;
    scanf("%d",&i);
    return i;
}
int findAreaOfRectangle(int width , int length){
    return (width*length);
}
int findCircumferenceOfRectangle(int width, int length){
    return (2*(width+length));
}
int main() {
    printf("Enter a Length ");
    int number1 = getNumberFromUser();
      printf("Enter a Width ");
       int number2 = getNumberFromUser();
    int area = findAreaOfRectangle(number1,number2);
    int circumference = findCircumferenceOfRectangle(number1,number2);
    printf("Area is %d\n ",area);
    printf("Circumference is %d ",circumference);

    return 0;
}
