//write a program on square star pattern.
#include<stdio.h>
int getNumber(){
int number;
printf("enter the number ");
scanf("%d",& number);
return number;
}
int findSquarePattern (int a){
 for (int i=0;i<a;i++){
 for (int j=0;j<a;j++){
     printf("* \t");
 }
 printf("\n");
 }
 return 0;
}
void main(){
    findSquarePattern(getNumber());
}
