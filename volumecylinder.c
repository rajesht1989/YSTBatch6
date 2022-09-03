//write a program radius and height from user and identify the volume in cylinder
#include<stdio.h>
double getNumberUser(){
    double a;
    scanf("%lf",&a);
    return a;
}
double volumeOfCylinder(double r,double h){
    return 3.14*(r*r)*h;
} 
void main(){
   printf("Enter the radius value");
    double r=getNumberUser();
     printf("Enter the Height value");
    double h=getNumberUser();
    double volume=volumeOfCylinder(r,h);
    printf("volume value is %lf",volume);
}
