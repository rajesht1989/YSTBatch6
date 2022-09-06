// writw a programe to get number from user and identify volume of cylider
#include <stdio.h>
float getNumberFromUser(){
    float k;
    scanf("%f",&k);
    return k;
}
float findAreaOfCylinder(float radius){
    return (4/3*(3.14)*(radius*radius*radius));
}

void main() {
    printf("Enter a radius ");
    float number1 = getNumberFromUser();
     
    float volume = findAreaOfCylinder(number1);
    
    printf("volume is %f",volume);
   
}
