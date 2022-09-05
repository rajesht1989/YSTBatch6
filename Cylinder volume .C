//write a program radius and height from user and identify the volume in cylinder
#include<stdio.h>
float getNumberUser(){
    float number;
    scanf("%f",&number);
    return number;
}
float volumeOfCylinder(float  r,float h){
    return 3.14*(r*r)*h;
} 
void main(){
   printf("Enter the radius value ");
    float r=getNumberUser();
     printf("Enter the Height value ");
    float h=getNumberUser();
    float volume=volumeOfCylinder(r,h);
    printf("volume value is %f",volume);
}
