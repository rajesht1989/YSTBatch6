//write a program on rectangle star pattern.
#include<stdio.h>
int getNumber(){
int number;
printf("enter the number ");
scanf("%d",& number);
return number;
}
int findRectanglePattern (int a){
 for (int i=0;i<a;i++){
 for (int j=0;j<a*2;j++){
     printf("* \t");
 }
 printf("\n");
 }
 return 0;
}
void main(){
    findRectanglePattern(getNumber());
}
