//write a program Edge  from user and identify the cube surface area in cube
#include<stdio.h>
int getNumberUser(){
    int a;
    scanf("%d",&a);
    return a;
}
int cubeSurfaceArea(int a){
    return 6*(a*a);
} 
void main(){
  printf("Enter the Edge value");
    float a=getNumberUser();
     float surfacearea=cubeSurfaceArea(a);
    printf("surfacearea value is %f",surfacearea);
}
