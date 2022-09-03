//write a program base and height from user and identify the area in triangle
#include<stdio.h>
float getNumberUser(){
    float a;
    scanf("%f",&a);
    return a;
}
float areaOfTriangle(float b,float h){
    return (b*h)/2;
} 
void main(){
   printf("Enter the breath value");
    float b=getNumberUser();
     printf("Enter the Height value");
    float h=getNumberUser();
    float area=areaOfTriangle(b,h);
    printf("Area value is %f",area);
}
