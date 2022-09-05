// write a program get number from in three number  user logical operator and using color code complication check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int number;
    scanf("%d",&number);
    return number;
}
 int identifyColorCode(int a,int b,int c){
    if(a == 0 && b == 0 && c == 0){
        printf("RGB is color is black");
        
    }
        if(a==255 && b==0 && c==0){
             printf("it's is color is red");
        }
        if(a==255 && b==255 && c==255){
            printf("RGB is color is white");
        }
    }
    
void main(){
     printf("Enter a number ");
     int a = getNumberFromUser();
    
      printf("Enter b number ");
      int b = getNumberFromUser();
     
      printf("Enter c number ");
      int c = getNumberFromUser();
    
    int ColorCode= identifyColorCode(a,b,c);
}
